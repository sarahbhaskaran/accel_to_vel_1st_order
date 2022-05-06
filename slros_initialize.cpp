#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "accel_to_vel_1st_order";

// For Block accel_to_vel_1st_order/Subscribe
SimulinkSubscriber<std_msgs::Float64, SL_Bus_accel_to_vel_1st_order_std_msgs_Float64> Sub_accel_to_vel_1st_order_33;

// For Block accel_to_vel_1st_order/Publish
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_accel_to_vel_1st_order_geometry_msgs_Twist> Pub_accel_to_vel_1st_order_32;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

