FROM osrf/ros:rolling-desktop-jammy

# Install ROS 2 packages
RUN apt-get update && apt-get install -y --no-install-recommends \
    ros-rolling-desktop-full=0.10.0-2* \
    && rm -rf /var/lib/apt/lists/* \
    && apt-get update && apt-get install -y x11-apps

ENV DISPLAY=novnc:0.0

# Set up the entrypoint script
COPY ros2_entrypoint.sh /


ENTRYPOINT ["/ros2_entrypoint.sh"]
# ref https://github.com/osrf/docker_images/blob/73c1bf4c30e97d5d3d7c2aaddc8137cae2411409/ros/rolling/ubuntu/jammy/desktop-full/Dockerfile
