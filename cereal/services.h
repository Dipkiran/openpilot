/* THIS IS AN AUTOGENERATED FILE, PLEASE EDIT services.py */
#ifndef __SERVICES_H
#define __SERVICES_H
struct service { char name[0x100]; int port; bool should_log; int frequency; int decimation; };
static struct service services[] = {
  { "sensorEvents", 8001, true, 100, 100 },
  { "gpsNMEA", 8002, true, 9, -1 },
  { "deviceState", 8003, true, 2, 1 },
  { "can", 8004, true, 100, -1 },
  { "controlsState", 8005, true, 100, 10 },
  { "pandaStates", 8006, true, 2, 1 },
  { "peripheralState", 8007, true, 2, 1 },
  { "radarState", 8008, true, 20, 5 },
  { "roadEncodeIdx", 8009, true, 20, 1 },
  { "liveTracks", 8010, true, 20, -1 },
  { "sendcan", 8011, true, 100, 139 },
  { "logMessage", 8012, true, 0, -1 },
  { "liveCalibration", 8013, true, 4, 4 },
  { "androidLog", 8014, true, 0, -1 },
  { "carState", 8015, true, 100, 10 },
  { "carControl", 8016, true, 100, 10 },
  { "longitudinalPlan", 8017, true, 20, 5 },
  { "procLog", 8018, true, 0, -1 },
  { "gpsLocationExternal", 8019, true, 10, 1 },
  { "ubloxGnss", 8020, true, 10, -1 },
  { "clocks", 8021, true, 1, 1 },
  { "ubloxRaw", 8023, true, 20, -1 },
  { "liveLocationKalman", 8024, true, 20, 2 },
  { "liveParameters", 8025, true, 20, 2 },
  { "cameraOdometry", 8026, true, 20, 5 },
  { "lateralPlan", 8027, true, 20, 5 },
  { "thumbnail", 8028, true, 0, 1 },
  { "carEvents", 8029, true, 1, 1 },
  { "carParams", 8030, true, 0, 1 },
  { "roadCameraState", 8031, true, 20, 20 },
  { "driverCameraState", 8032, true, 20, 20 },
  { "driverEncodeIdx", 8033, true, 20, 1 },
  { "driverState", 8034, true, 20, 10 },
  { "driverMonitoringState", 8035, true, 20, 10 },
  { "wideRoadEncodeIdx", 8036, true, 20, 1 },
  { "wideRoadCameraState", 8037, true, 20, 20 },
  { "modelV2", 8038, true, 20, 40 },
  { "managerState", 8039, true, 2, 1 },
  { "uploaderState", 8040, true, 0, 1 },
  { "navInstruction", 8041, true, 0, -1 },
  { "navRoute", 8042, true, 0, -1 },
  { "testJoystick", 8043, false, 0, -1 },
};
#endif

