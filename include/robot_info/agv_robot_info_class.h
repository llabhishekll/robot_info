#ifndef AVG_ROBOT_INFO_H
#define AVG_ROBOT_INFO_H

#include "robot_info/hydraulic_system_monitor.h"
#include "robot_info/robot_info_class.h"
#include <ros/ros.h>
#include <string>

class AGVRobotInfo : public RobotInfo {
protected:
  // member variables
  std::string maximum_payload;
  HydraulicSystemMonitor hydraulic_system;

public:
  // constructor
  AGVRobotInfo(ros::NodeHandle *node, std::string robot_description,
               std::string serial_number, std::string ip_address,
               std::string firmware_version, std::string maximum_payload,
               std::string hydraulic_oil_temperature,
               std::string hydraulic_oil_tank_fill_level,
               std::string hydraulic_oil_pressure);

  // member functions
  void publish_data() override;
};

#endif
