#ifndef ROBOT_INFO_H
#define ROBOT_INFO_H

#include <ros/ros.h>
#include <string>

class RobotInfo {
protected:
  // member variables
  std::string robot_description;
  std::string serial_number;
  std::string ip_address;
  std::string firmware_version;

  // ros objects
  ros::Publisher publisher;

public:
  // constructor
  RobotInfo(ros::NodeHandle *node, std::string robot_description,
            std::string serial_number, std::string ip_address,
            std::string firmware_version);

  // member functions
  virtual void publish_data();
};

#endif
