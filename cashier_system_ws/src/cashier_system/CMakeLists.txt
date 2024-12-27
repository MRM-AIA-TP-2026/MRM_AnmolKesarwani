cmake_minimum_required(VERSION 3.8)
project(cashier_system)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(rosidl_default_generators REQUIRED)
rosidl_generate_interfaces(${cashier_system}
  "msg/bill.message"
  DEPENDENCIES builtin_interfaces
)
add_executable(publisher src/publisher.cpp)
ament_target_dependencies(publisher rclcpp)

add_executable(subscriber src/subscriber.cpp)
ament_target_dependencies(subscriber rclcpp std_srvs)

add_executable(display src/display.cpp)
ament_target_dependencies(display rclcpp)

rosidl_target_interfaces(publisher ${cashier_system} "rosidl_typesupport_cpp")
rosidl_target_interfaces(subscriber ${cashier_system} "rosidl_typesupport_cpp")
rosidl_target_interfaces(display ${cashier_system} "rosidl_typesupport_cpp")

# Install targets
install(TARGETS publisher subscriber display
  DESTINATION lib/${cashier_system}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
