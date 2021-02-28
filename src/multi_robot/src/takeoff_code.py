#!/usr/bin/env python
import rospy
from geometry_msgs.msg import Twist
from hector_uav_msgs.srv import EnableMotors

# Rosservice function to turn on the drone motors
def motor_on():
    rospy.wait_for_service('enable_motors')
    try:
        motor_on = rospy.ServiceProxy('enable_motors', EnableMotors, True)
        turn_on = motor_on(True)
        return turn_on
    except rospy.ServiceException as e:
        rospy.logerr("Service call failed: %s" % e)


if __name__ == '__main__':
    rospy.init_node('takeoff_2m')
    # check if motors are on
    if motor_on():

        velocity_publisher = rospy.Publisher('cmd_vel', Twist, queue_size=1, latch=True)

        vel_msg = Twist()

        # Receiveing the user's input
	speed_z  = 0.5
        distance = 2.0

        vel_msg.linear.x = 0.0
        vel_msg.linear.y = 0.0
        vel_msg.linear.z = speed_z

        vel_msg.angular.x = 0
        vel_msg.angular.y = 0
        vel_msg.angular.z = 0

        
#        while not rospy.is_shutdown():
	# Setting the current time for distance calculus
	t0 = rospy.Time.now().to_sec()
	current_distance = 0

	try:
	    # Loop to move the turtle in an specified distance
	    while (current_distance < distance) and not rospy.is_shutdown():
	        # Publish the velocity
	        velocity_publisher.publish(vel_msg)
	        # Takes actual time to velocity calculus
	        t1 = rospy.Time.now().to_sec()
	        # Calculates distancePoseStamped
	        current_distance = speed_z * (t1 - t0)
	    # After the loop, stops the robot
	    vel_msg.linear.x = 0.0
	    vel_msg.linear.y = 0.0
	    vel_msg.linear.z = 0.0
	    # Force the robot to stop
	    velocity_publisher.publish(vel_msg)
	except KeyboardInterrupt:
	    print('Interrupted')
	    vel_msg.linear.x = 0.0
	    vel_msg.linear.y = 0.0
	    vel_msg.linear.z = 0.0
	    # Force the robot to stop
	    velocity_publisher.publish(vel_msg)
	    sys.exit(0)


