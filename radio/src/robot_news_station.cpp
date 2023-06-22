#include <rclcpp/rclcpp.hpp>
class RobotNewsStationNode : public rclcpp::Node
{
private:
    /* data */
public:
    RobotNewsStationNode() : Node("robot_news_station")
    {
        
    }
};



int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<RobotNewsStationNode>();
    
    
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}

// /home/rizo/ros2_intro/friend_msgs/CMakeLists.txt
// /home/rizo/edu/ros2_intro/friend_msgs/CMakeLists.txt