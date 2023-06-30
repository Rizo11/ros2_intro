#include "rclcpp/rclcpp.hpp"
#include <buggy/msg/custom_msg.hpp>

using namespace std::chrono_literals;

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  
  buggy::msg::CustomMsg msg;

  auto node = rclcpp::Node::make_shared("pub");
  rclcpp::Publisher<buggy::msg::CustomMsg>::SharedPtr publisher;
  publisher = node->create_publisher<buggy::msg::CustomMsg>("/topic", 10);

  rclcpp::Rate loop_rate(500ms);

  while(rclcpp::ok()){
    msg.name.data = "buggy_msg";
    msg.flag.data = true;

    publisher->publish(msg);
    rclcpp::spin_some(node);
    loop_rate.sleep();
  }
  return 0;
}



