#include "robot_info/agv_robot_info_class.h"
#include <ros/ros.h>

int main(int argc, char **argv) {
  // initialize ros
  ros::init(argc, argv, "avg_robot_info_node");
  ros::NodeHandle node;

  // initialize class
  AGVRobotInfo robot_obj = AGVRobotInfo(&node, "Mir100", "567A359",
                                        "169.254.5.180", "3.5.8", "100 Kg");

  // 1 cycle per second
  ros::Rate rate(1);

  while (ros::ok()) {
    robot_obj.publish_data();
    // runs out whatever duration is remaining from target
    rate.sleep();
    ros::spinOnce();
  }
}