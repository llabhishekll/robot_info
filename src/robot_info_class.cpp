#include "robot_info/robot_info_class.h"
#include <robot_info/Packet.h>

RobotInfo::RobotInfo(ros::NodeHandle *node, std::string robot_description,
                     std::string serial_number, std::string ip_address,
                     std::string firmware_version) : 
    robot_description(robot_description),
    serial_number(serial_number),
    ip_address(ip_address),
    firmware_version(firmware_version) {
  // ros object
  this->publisher = node->advertise<robot_info::Packet>("/robot_info", 1);
}

void RobotInfo::publish_data() {
  // create msg object
  robot_info::Packet packet;

  // populate msg
  packet.info_1 = "robot_description: " + this->robot_description;
  packet.info_2 = "serial_number: " + this->serial_number;
  packet.info_3 = "ip_address: " + this->ip_address;
  packet.info_4 = "firmware_version: " + this->firmware_version;

  // publish msg
  this->publisher.publish(packet);
}