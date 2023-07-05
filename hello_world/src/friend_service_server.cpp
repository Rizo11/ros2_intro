#include <rclcpp/rclcpp.hpp>
#include <friend_msgs/srv/friend_info_service.hpp>
#include <memory>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp/logger.hpp>
#include <rcutils/error_handling.h>


#include <cinttypes>
#include <iostream>
#include <memory>
#include <string>
#include <utility>

#include <rclcpp/rclcpp.hpp>
#include <rclcpp/logger.hpp>
#include <rcutils/error_handling.h>
#include "rclcpp/logging.hpp"


using namespace std::chrono_literals;


bool setHeartBeat(std::shared_ptr<friend_msgs::srv::FriendInfoService::Request> req,
        std::shared_ptr<friend_msgs::srv::FriendInfoService::Response> res)
{
  res->heartbeat = req->value;
<<<<<<< HEAD

=======
  // RCLCPP_DEBUG_FUNCTION();
>>>>>>> upstream/master
  return true;
}

class LoggingIntro : public rclcpp::Node{
  public:

    LoggingIntro(): Node("logging_intro"){
      timer_ = create_wall_timer(500ms, std::bind(&LoggingIntro::on_timer, this));
      debug_function_to_evaluate_ = std::bind(&LoggingIntro::is_divisor_of_twelve, this, std::cref(val), get_logger());

      auto on_one_shot_timer =
        [this]() -> void {
          one_shot_timer_->cancel();
          RCLCPP_INFO(get_logger(), "Setting severity threshold to DEBUG");
          auto ret = rcutils_logging_set_logger_level(
            get_logger().get_name(), RCUTILS_LOG_SEVERITY_DEBUG);
          if (ret != RCUTILS_RET_OK) {
            RCLCPP_ERROR(get_logger(), "Error setting severity: %s", rcutils_get_error_string().str);
            rcutils_reset_error();
          }
        };
        one_shot_timer_ = create_wall_timer(2500ms, on_one_shot_timer);
    }

    bool is_divisor_of_twelve(size_t val, rclcpp::Logger logger){
      if (val == 0) {
        RCLCPP_ERROR(logger, "Modulo divisor cannot be 0");
        return false;
      }

      RCLCPP_WARN_STREAM_ONCE( get_logger(), " only print onces " << 12 % val);

      return (12 % val) == 0;
    }

    void on_timer(){
      // RCLCPP_INFO(get_logger(), "this is ros info");
      // RCLCPP_DEBUG(get_logger(), "this is ros debug");
      // RCLCPP_ERROR(get_logger(), "this is ros error");
      // RCLCPP_FATAL(get_logger(), "this is ros fatal error");
      // RCLCPP_WARN(get_logger(), "this is ros warning");
      RCLCPP_INFO_STREAM( get_logger(), "this is ros info value " << val);
      // for(int i=0; i<5; i++){
      //   RCLCPP_WARN_STREAM_ONCE( get_logger(), " only print onces " << i);
      //   RCLCPP_WARN_STREAM_SKIPFIRST( get_logger(), "skip first time and then print " << i);
      //   RCLCPP_WARN_STREAM_THROTTLE(get_logger(), *get_clock(), 1000, "fix messages for a second " << i);
      // }
      val += 1;

      RCLCPP_DEBUG_FUNCTION(get_logger(), &debug_function_to_evaluate_,
                        "Count divides into 12 (function evaluated to true)");
    }

      
  private:
    rclcpp::TimerBase::SharedPtr one_shot_timer_, timer_;
    int val = 0;
    size_t count_;
    std::function<bool()> debug_function_to_evaluate_;
    

};


int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("service_server");

  rclcpp::Service<friend_msgs::srv::FriendInfoService>::SharedPtr service = 
    node->create_service<friend_msgs::srv::FriendInfoService>("set_heartbeat", &setHeartBeat);
  // TODO Create service and register a callback with two arguments; name the callback function as addition
  // Inside the callback, print request value and assign the response value, i.e., heartbeat, as the request value 
  node->get_logger().set_level(rclcpp::Logger::Level::Warn);

  
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Service server is ready");
<<<<<<< HEAD
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "*************Logging*************");
=======
  // RCLCPP_INFO_STREAM(rclcpp::get_logger("rclcpp"), "Service server is ready" << );
  RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Service server is ready");
  RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Service server is ready");
>>>>>>> upstream/master
  
  auto logger = std::make_shared<LoggingIntro>();
  logger->get_logger().set_level(rclcpp::Logger::Level::Warn);

  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Service server is Muhammadrizo");
  rclcpp::spin(logger);
  rclcpp::spin(node);
  rclcpp::shutdown();

  return 0;
}
