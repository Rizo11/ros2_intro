#include "rclcpp/rclcpp.hpp"
#include <buggy/msg/custom_msg.hpp>
#include <buggy/srv/custom_srv.hpp>
#include<iostream>

using std::placeholders::_1; 
using namespace std::chrono_literals;

bool flag  = false;
bool flag2 = false;

void callback(const buggy::msg::CustomMsg::ConstPtr& msg)
{
	flag = msg->flag.data;
}

bool turnOn(const std::shared_ptr<buggy::srv::CustomSrv::Request> req, std::shared_ptr<buggy::srv::CustomSrv::Response> res) {
  flag2 = req->data.data;
  res->result.data = flag2;
  return true;
}

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  
  auto node = rclcpp::Node::make_shared("pub");
  rclcpp::Subscription<buggy::msg::CustomMsg>::SharedPtr subscriber_;
  subscriber_ = node->create_subscription<buggy::msg::CustomMsg>("/topic", 10, std::bind(&callback, _1));

  rclcpp::Service<buggy::srv::CustomSrv>::SharedPtr turn_on_service_ = node->create_service<buggy::srv::CustomSrv>("turnon", &turnOn);

  rclcpp::Rate loop_rate(500ms);
  while(rclcpp::ok()){
    if(flag && flag2)
      std::cout << "You finished, congrats on 10 points\n";
    rclcpp::spin_some(node);
    loop_rate.sleep();
  }  
  rclcpp::shutdown();
  return 0;
}

