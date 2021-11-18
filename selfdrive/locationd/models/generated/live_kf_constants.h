#pragma once

#include <unordered_map>
#include <eigen3/Eigen/Dense>

#define STATE_ACCELERATION_START 17
#define STATE_ACCELERATION_END 20
#define STATE_ACCELERATION_LEN 3
#define STATE_ACCELERATION_ERR_START 16
#define STATE_ACCELERATION_ERR_END 19
#define STATE_ACCELERATION_ERR_LEN 3
#define STATE_ACC_BIAS_START 23
#define STATE_ACC_BIAS_END 26
#define STATE_ACC_BIAS_LEN 3
#define STATE_ACC_BIAS_ERR_START 22
#define STATE_ACC_BIAS_ERR_END 25
#define STATE_ACC_BIAS_ERR_LEN 3
#define STATE_ANGULAR_VELOCITY_START 10
#define STATE_ANGULAR_VELOCITY_END 13
#define STATE_ANGULAR_VELOCITY_LEN 3
#define STATE_ANGULAR_VELOCITY_ERR_START 9
#define STATE_ANGULAR_VELOCITY_ERR_END 12
#define STATE_ANGULAR_VELOCITY_ERR_LEN 3
#define STATE_ECEF_ORIENTATION_START 3
#define STATE_ECEF_ORIENTATION_END 7
#define STATE_ECEF_ORIENTATION_LEN 4
#define STATE_ECEF_ORIENTATION_ERR_START 3
#define STATE_ECEF_ORIENTATION_ERR_END 6
#define STATE_ECEF_ORIENTATION_ERR_LEN 3
#define STATE_ECEF_POS_START 0
#define STATE_ECEF_POS_END 3
#define STATE_ECEF_POS_LEN 3
#define STATE_ECEF_POS_ERR_START 0
#define STATE_ECEF_POS_ERR_END 3
#define STATE_ECEF_POS_ERR_LEN 3
#define STATE_ECEF_VELOCITY_START 7
#define STATE_ECEF_VELOCITY_END 10
#define STATE_ECEF_VELOCITY_LEN 3
#define STATE_ECEF_VELOCITY_ERR_START 6
#define STATE_ECEF_VELOCITY_ERR_END 9
#define STATE_ECEF_VELOCITY_ERR_LEN 3
#define STATE_GYRO_BIAS_START 13
#define STATE_GYRO_BIAS_END 16
#define STATE_GYRO_BIAS_LEN 3
#define STATE_GYRO_BIAS_ERR_START 12
#define STATE_GYRO_BIAS_ERR_END 15
#define STATE_GYRO_BIAS_ERR_LEN 3
#define STATE_IMU_OFFSET_START 20
#define STATE_IMU_OFFSET_END 23
#define STATE_IMU_OFFSET_LEN 3
#define STATE_IMU_OFFSET_ERR_START 19
#define STATE_IMU_OFFSET_ERR_END 22
#define STATE_IMU_OFFSET_ERR_LEN 3
#define STATE_ODO_SCALE_START 16
#define STATE_ODO_SCALE_END 17
#define STATE_ODO_SCALE_LEN 1
#define STATE_ODO_SCALE_ERR_START 15
#define STATE_ODO_SCALE_ERR_END 16
#define STATE_ODO_SCALE_ERR_LEN 1

#define OBSERVATION_ANGLE_OFFSET_FAST 27
#define OBSERVATION_CAMERA_ODO_ROTATION 14
#define OBSERVATION_CAMERA_ODO_TRANSLATION 13
#define OBSERVATION_ECEF_ORIENTATION_FROM_GPS 32
#define OBSERVATION_ECEF_POS 12
#define OBSERVATION_ECEF_VEL 31
#define OBSERVATION_FEATURE_TRACK_TEST 17
#define OBSERVATION_GPS_NED 2
#define OBSERVATION_GPS_VEL 5
#define OBSERVATION_IMU_FRAME 19
#define OBSERVATION_LANE_PT 18
#define OBSERVATION_MSCKF_TEST 16
#define OBSERVATION_NO_ACCEL 33
#define OBSERVATION_NO_OBSERVATION 1
#define OBSERVATION_NO_ROT 9
#define OBSERVATION_ODOMETRIC_SPEED 3
#define OBSERVATION_ORB_FEATURES 15
#define OBSERVATION_ORB_POINT 11
#define OBSERVATION_PHONE_ACCEL 10
#define OBSERVATION_PHONE_GYRO 4
#define OBSERVATION_PSEUDORANGE 22
#define OBSERVATION_PSEUDORANGE_GLONASS 20
#define OBSERVATION_PSEUDORANGE_GPS 6
#define OBSERVATION_PSEUDORANGE_RATE 23
#define OBSERVATION_PSEUDORANGE_RATE_GLONASS 21
#define OBSERVATION_PSEUDORANGE_RATE_GPS 7
#define OBSERVATION_ROAD_FRAME_XY_SPEED 24
#define OBSERVATION_ROAD_FRAME_X_SPEED 30
#define OBSERVATION_ROAD_FRAME_YAW_RATE 25
#define OBSERVATION_SPEED 8
#define OBSERVATION_STEER_ANGLE 26
#define OBSERVATION_STEER_RATIO 29
#define OBSERVATION_STIFFNESS 28
#define OBSERVATION_UNKNOWN 0

static const Eigen::VectorXd live_initial_x = (Eigen::VectorXd(26) << 3.8800000e+06,-3.3700000e+06,3.7600000e+06,4.2254641e-01,-3.1238054e-01,-8.3602975e-01,-1.5788347e-01,0.0000000e+00,0.0000000e+00,0.0000000e+00,0.0000000e+00,0.0000000e+00,0.0000000e+00,0.0000000e+00,0.0000000e+00,0.0000000e+00,1.0000000e+00,0.0000000e+00,0.0000000e+00,0.0000000e+00,0.0000000e+00,0.0000000e+00,0.0000000e+00,0.0000000e+00,0.0000000e+00,0.0000000e+00).finished();
static const Eigen::VectorXd live_initial_P_diag = (Eigen::VectorXd(25) << 1.e+02,1.e+02,1.e+02,1.e-04,1.e-04,1.e-04,1.e+02,1.e+02,1.e+02,1.e+00,1.e+00,1.e+00,1.e+00,1.e+00,1.e+00,4.e-04,1.e+04,1.e+04,1.e+04,1.e-04,1.e-04,1.e-04,1.e-04,1.e-04,1.e-04).finished();
static const Eigen::VectorXd live_Q_diag = (Eigen::VectorXd(25) << 8.9999999999999998e-04,8.9999999999999998e-04,8.9999999999999998e-04,9.9999999999999995e-07,9.9999999999999995e-07,9.9999999999999995e-07,1.0000000000000000e-04,1.0000000000000000e-04,1.0000000000000000e-04,1.0000000000000002e-02,1.0000000000000002e-02,1.0000000000000002e-02,2.5000000000000001e-09,2.5000000000000001e-09,2.5000000000000001e-09,4.0000000000000001e-08,9.0000000000000000e+00,9.0000000000000000e+00,9.0000000000000000e+00,6.9444444444444458e-07,6.9444444444444458e-07,6.9444444444444458e-07,2.5000000000000001e-05,2.5000000000000001e-05,2.5000000000000001e-05).finished();
static const std::unordered_map<int, Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor>> live_obs_noise_diag = {
  { 3, (Eigen::VectorXd(1) << 0.04000000000000001).finished() },
  { 4, (Eigen::VectorXd(3) << 0.0006250000000000001,0.0006250000000000001,0.0006250000000000001).finished() },
  { 10, (Eigen::VectorXd(3) << 0.25,0.25,0.25).finished() },
  { 14, (Eigen::VectorXd(3) << 0.0025000000000000005,0.0025000000000000005,0.0025000000000000005).finished() },
  { 19, (Eigen::VectorXd(3) << 0.0025000000000000005,0.0025000000000000005,0.0025000000000000005).finished() },
  { 9, (Eigen::VectorXd(3) << 2.5e-05,2.5e-05,2.5e-05).finished() },
  { 33, (Eigen::VectorXd(3) << 0.0025000000000000005,0.0025000000000000005,0.0025000000000000005).finished() },
  { 12, (Eigen::VectorXd(3) << 25,25,25).finished() },
  { 31, (Eigen::VectorXd(3) << 0.25,0.25,0.25).finished() },
  { 32, (Eigen::VectorXd(4) << 0.04000000000000001,0.04000000000000001,0.04000000000000001,0.04000000000000001).finished() },
};

