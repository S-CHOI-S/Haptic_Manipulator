
"use strict";

let ManipulatorService = require('./ManipulatorService.js')
let SetActuatorState = require('./SetActuatorState.js')
let DockBatteryService = require('./DockBatteryService.js')
let GetKinematicsPose = require('./GetKinematicsPose.js')
let SetKinematicsPose = require('./SetKinematicsPose.js')
let SetJointPosition = require('./SetJointPosition.js')
let GetJointPosition = require('./GetJointPosition.js')
let KillManipulatorService = require('./KillManipulatorService.js')
let SetDrawingTrajectory = require('./SetDrawingTrajectory.js')

module.exports = {
  ManipulatorService: ManipulatorService,
  SetActuatorState: SetActuatorState,
  DockBatteryService: DockBatteryService,
  GetKinematicsPose: GetKinematicsPose,
  SetKinematicsPose: SetKinematicsPose,
  SetJointPosition: SetJointPosition,
  GetJointPosition: GetJointPosition,
  KillManipulatorService: KillManipulatorService,
  SetDrawingTrajectory: SetDrawingTrajectory,
};
