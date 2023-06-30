# cmake_minimum_required(VERSION 3.5)
# project(buggy)

# # Find required packages
# find_package(ament_cmake REQUIRED)
# find_package(rclcpp REQUIRED)
# find_package(std_msgs REQUIRED)
# find_package(std_srvs REQUIRED)
# find_package(geometry_msgs REQUIRED)
# find_package(builtin_interfaces REQUIRED)
# find_package(rosidl_default_generators REQUIRED)

# # Add generated message files
# rosidl_generate_interfaces(${PROJECT_NAME}
#   "msg/CustomMsg.msg"
#   "srv/CustomSrv.srv"
#   DEPENDENCIES builtin_interfaces std_msgs geometry_msgs
# )

# set(dependencies
#   rclcpp
#   std_msgs
#   std_srvs
# )

# # Build executables
# add_executable(sub src/sub.cpp)
# rosidl_get_typesupport_target(cpp_typesupport_target ${PROJECT_NAME} "rosidl_typesupport_cpp")
# target_link_libraries(sub "${cpp_typesupport_target}") 
# ament_target_dependencies(sub
#   ${dependencies}
# )

# add_executable(pub src/pub.cpp)
# rosidl_get_typesupport_target(cpp_typesupport_target ${PROJECT_NAME} "rosidl_typesupport_cpp")
# target_link_libraries(pub "${cpp_typesupport_target}") 
# ament_target_dependencies(pub
#   ${dependencies}
# )


# # Install executables and launch files
# install(TARGETS
#   sub
#   pub 
#   ARCHIVE DESTINATION lib
#   LIBRARY DESTINATION lib
#   RUNTIME DESTINATION lib/${PROJECT_NAME}
# )

# install(DIRECTORY launch
#   DESTINATION share/${PROJECT_NAME}
# )




# # If testing is enabled, find test dependencies
# if(BUILD_TESTING)
#   find_package(ament_lint_auto REQUIRED)
#   ament_lint_auto_find_test_dependencies()
# endif()

# # Export dependencies and package information
# ament_export_dependencies(
#   rclcpp
#   std_msgs
#   std_srvs
# )

# ament_package()


cmake_minimum_required(VERSION 3.5)
project(buggy)


find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(std_srvs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# Add generated message files
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/CustomMsg.msg"
  "srv/CustomSrv.srv"
  DEPENDENCIES builtin_interfaces std_msgs geometry_msgs
)

set(dependencies
  rclcpp
)

# Build executables
add_executable(sub src/sub.cpp)
rosidl_get_typesupport_target(cpp_typesupport_target ${PROJECT_NAME} "rosidl_typesupport_cpp")
target_link_libraries(sub "${cpp_typesupport_target}") 
ament_target_dependencies(sub
  ${dependencies}
)

add_executable(pub src/pub.cpp)
rosidl_get_typesupport_target(cpp_typesupport_target ${PROJECT_NAME} "rosidl_typesupport_cpp")
target_link_libraries(pub "${cpp_typesupport_target}") 
ament_target_dependencies(pub
  ${dependencies}
)

# add_executable(sub src/sub.cpp)
# ament_target_dependencies(sub ${dependencies})

install(TARGETS
  sub
  pub 
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY launch DESTINATION share/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_export_dependencies(${dependencies})
ament_package()