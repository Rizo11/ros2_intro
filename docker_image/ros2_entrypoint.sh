#!/bin/bash
set -e

# Setup ROS 2 environment
source "/opt/ros/$ROS_DISTRO/setup.bash"

# Execute the provided command or start a shell
exec "$@"
