#include "robot_info/agv_robot_info_class.h"
#include "robot_info/Packet.h"
#include "robot_info/robot_info_class.h"

AGVRobotInfo::AGVRobotInfo(ros::NodeHandle *node, std::string robot_description,
                           std::string serial_number, std::string ip_address,
                           std::string firmware_version,
                           std::string maximum_payload)
    : RobotInfo(node, robot_description, serial_number, ip_address, firmware_version),
      maximum_payload(maximum_payload) {}

void AGVRobotInfo::publish_data() {
  // create msg object
  robot_info::Packet packet;

  // populate msg
  packet.info_1 = "robot_description: " + this->robot_description;
  packet.info_2 = "serial_number: " + this->serial_number;
  packet.info_3 = "ip_address: " + this->ip_address;
  packet.info_4 = "firmware_version: " + this->firmware_version;
  packet.info_5 = "maximum_payload: " + this->maximum_payload;

  // publish msg
  this->publisher.publish(packet);
}