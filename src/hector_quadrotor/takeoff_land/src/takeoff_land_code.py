#! /usr/bin/env python

import rospy
from geometry_msgs.msg import Twist
from std_msgs.msg import Empty
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

def takeoff_callback(msg): 
    distance = 2.0
    speed_z  = 0.5
    if motor_on():
       # Setting the current time for distance calculus
       t0 = rospy.Time.now().to_sec()
       current_distance = 0
       twist_msg.linear.z = speed_z
       while (current_distance < distance) and not rospy.is_shutdown():
          cmd_vel_pub.publish(twist_msg)
          # Takes actual time to velocity calculus
	  t1 = rospy.Time.now().to_sec()
	  # Calculates distancePoseStamped
	  current_distance = speed_z * (t1 - t0)
	
       twist_msg.linear.z = 0.0
       while not rospy.is_shutdown():
           cmd_vel_pub.publish(twist_msg)
	   rate.sleep()

def land_callback(msg): 
	twist_msg.linear.z = -0.5
	i = 0
	while i < 50:
	   cmd_vel_pub.publish(twist_msg)
	   i = i + 1
	   rate.sleep()

	twist_msg.linear.z = 0
	cmd_vel_pub.publish(twist_msg)

rospy.init_node('takoff_land')
rate = rospy.Rate(10)

takeoff_sub = rospy.Subscriber('/takeoff', Empty, takeoff_callback)
land_sub = rospy.Subscriber('/land', Empty, land_callback)
cmd_vel_pub = rospy.Publisher('/cmd_vel', Twist, queue_size=1)

empty_msg = Empty()
twist_msg = Twist()

rospy.spin()
