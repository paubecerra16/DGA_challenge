
"use strict";

let VelocityXYCommand = require('./VelocityXYCommand.js');
let Supply = require('./Supply.js');
let AttitudeCommand = require('./AttitudeCommand.js');
let ServoCommand = require('./ServoCommand.js');
let RawRC = require('./RawRC.js');
let HeadingCommand = require('./HeadingCommand.js');
let ThrustCommand = require('./ThrustCommand.js');
let RC = require('./RC.js');
let RawImu = require('./RawImu.js');
let Compass = require('./Compass.js');
let VelocityZCommand = require('./VelocityZCommand.js');
let MotorPWM = require('./MotorPWM.js');
let RawMagnetic = require('./RawMagnetic.js');
let Altimeter = require('./Altimeter.js');
let ControllerState = require('./ControllerState.js');
let YawrateCommand = require('./YawrateCommand.js');
let MotorStatus = require('./MotorStatus.js');
let MotorCommand = require('./MotorCommand.js');
let HeightCommand = require('./HeightCommand.js');
let PositionXYCommand = require('./PositionXYCommand.js');
let RuddersCommand = require('./RuddersCommand.js');
let PoseActionFeedback = require('./PoseActionFeedback.js');
let PoseResult = require('./PoseResult.js');
let LandingGoal = require('./LandingGoal.js');
let LandingFeedback = require('./LandingFeedback.js');
let TakeoffActionResult = require('./TakeoffActionResult.js');
let PoseFeedback = require('./PoseFeedback.js');
let LandingAction = require('./LandingAction.js');
let LandingActionFeedback = require('./LandingActionFeedback.js');
let PoseActionGoal = require('./PoseActionGoal.js');
let TakeoffActionGoal = require('./TakeoffActionGoal.js');
let TakeoffResult = require('./TakeoffResult.js');
let PoseGoal = require('./PoseGoal.js');
let TakeoffAction = require('./TakeoffAction.js');
let LandingActionGoal = require('./LandingActionGoal.js');
let TakeoffGoal = require('./TakeoffGoal.js');
let PoseActionResult = require('./PoseActionResult.js');
let TakeoffActionFeedback = require('./TakeoffActionFeedback.js');
let LandingActionResult = require('./LandingActionResult.js');
let PoseAction = require('./PoseAction.js');
let TakeoffFeedback = require('./TakeoffFeedback.js');
let LandingResult = require('./LandingResult.js');

module.exports = {
  VelocityXYCommand: VelocityXYCommand,
  Supply: Supply,
  AttitudeCommand: AttitudeCommand,
  ServoCommand: ServoCommand,
  RawRC: RawRC,
  HeadingCommand: HeadingCommand,
  ThrustCommand: ThrustCommand,
  RC: RC,
  RawImu: RawImu,
  Compass: Compass,
  VelocityZCommand: VelocityZCommand,
  MotorPWM: MotorPWM,
  RawMagnetic: RawMagnetic,
  Altimeter: Altimeter,
  ControllerState: ControllerState,
  YawrateCommand: YawrateCommand,
  MotorStatus: MotorStatus,
  MotorCommand: MotorCommand,
  HeightCommand: HeightCommand,
  PositionXYCommand: PositionXYCommand,
  RuddersCommand: RuddersCommand,
  PoseActionFeedback: PoseActionFeedback,
  PoseResult: PoseResult,
  LandingGoal: LandingGoal,
  LandingFeedback: LandingFeedback,
  TakeoffActionResult: TakeoffActionResult,
  PoseFeedback: PoseFeedback,
  LandingAction: LandingAction,
  LandingActionFeedback: LandingActionFeedback,
  PoseActionGoal: PoseActionGoal,
  TakeoffActionGoal: TakeoffActionGoal,
  TakeoffResult: TakeoffResult,
  PoseGoal: PoseGoal,
  TakeoffAction: TakeoffAction,
  LandingActionGoal: LandingActionGoal,
  TakeoffGoal: TakeoffGoal,
  PoseActionResult: PoseActionResult,
  TakeoffActionFeedback: TakeoffActionFeedback,
  LandingActionResult: LandingActionResult,
  PoseAction: PoseAction,
  TakeoffFeedback: TakeoffFeedback,
  LandingResult: LandingResult,
};
