
- [Introduction to ROS2](#introduction-to-ros2)
  - [Course Structure :space\_invader:](#course-structure-space_invader)
  - [Docker](#docker)
    - [Why Docker instead of usual installation?](#why-docker-instead-of-usual-installation)
    - [Creating docker container](#creating-docker-container)
    - [Usefull commands](#usefull-commands)
  - [Git/Github](#gitgithub)
    - [Forking](#forking)
    - [Getting changes to forked repo from original repo](#getting-changes-to-forked-repo-from-original-repo)
  - [Bash](#bash)


# Introduction to ROS2
## Course Structure :space_invader:
    
- Section 1 :alien:	
    - ROS2 Fundamentals [:books:](lectures/ros2_fundamentals.pdf) [:scroll: code]()
    - Workout Examples  [:books:](lectures/) [:scroll: code]()
- Section 2 :alien:	
    - ROS2 Visualization  [:books:](lectures/) [:scroll: code]()
    - ROS2 Debugging [:books:]() [:scroll: code]()	
    - ROS2 Basic Control :books:	
    - ROS2 Simulation (Gazebo+SDF) [:books:](lectures/) [:scroll: code]()	
- Section 3 :alien:	
    - Mini Group Project 
- References
    - https://docs.ros.org/en/foxy/index.html

## Docker
<div style="text-align: center;">
  <img src="assets/docker.jpg" alt="Alt Text">
</div>

- **Docker** is a tool that helps developers and system administrators package and run applications in a very organized and efficient way. It uses something called **containers** to achieve this.
- Think of a <a id="docker-container"></a>**containers** like a small, self-contained box that holds everything an application needs to run. It includes the application's code, any libraries or tools it requires, and even the operating system components it relies on. By using **containers**, we can make sure that an application runs the same way on different computers, without worrying about compatibility issues. A **container** includes everything needed to run the application, such as the code, runtime environment, system tools, and libraries.

<div style="text-align: center;">
  <img src="assets/dockervsvm.png" alt="Alt Text">
</div>

- **Docker** allows developers to create these **containers** using simple configuration files called **Dockerfiles**. These files specify what should go into the **container** and how it should be set up. Once the **container** is created, it can be shared with others by uploading it to a special place called a **Docker Registry**.

<div style="text-align: center;">
  <img src="assets/dockerfile.png" alt="Alt Text">
</div>

- <a id="docker-image"></a>**Docker Image**: A Docker image is a read-only template that contains the instructions for creating a container. It includes the application code, runtime environment, libraries, and other dependencies. **Docker images** are built using a declarative file called a **Dockerfile**, which specifies the steps to build the image.

- **Docker Engine**: Docker Engine is the runtime environment that runs and manages containers. It includes the Docker daemon, which handles the creation, execution, and monitoring of containers, and the Docker CLI (Command Line Interface), which provides a command-line interface to interact with Docker.

- **Containerization**: Containerization is the process of creating and running containers using Docker. It encapsulates an application and its dependencies into a container, allowing it to run consistently across different environments, from development to production.

- **Docker Registry**: Docker Registry is a repository for storing and sharing **Docker images**. The default public registry is **Docker Hub**, which hosts a vast collection of pre-built **Docker images**. You can also set up private registries to store and distribute your custom **Docker images**.

- Let's consider the example of the **Docker image** in the provided in this repo, which is specific to ROS 2 (Robot Operating System).
    - The *Docker image* in the repository is designed to provide a complete and isolated environment for working with ROS 2. It is based on the osrf/ros:rolling-desktop-jammy base image, which already includes the necessary dependencies for running ROS 2.
    - The **Dockerfile** in the repository specifies additional instructions to customize the image for the desired setup. Here's a simplified version of the **Dockerfile**:
        ```bash
        FROM osrf/ros:rolling-desktop-jammy

        # Install ROS 2 packages
        RUN apt-get update && apt-get install -y --no-install-recommends \
            ros-rolling-desktop-full=0.10.0-2* \
            && rm -rf /var/lib/apt/lists/*

        # Set up the entrypoint script
        COPY ros2_entrypoint.sh /

        ENTRYPOINT ["/ros2_entrypoint.sh"]
        ```
      - In this example, the **Dockerfile** starts with the base image `osrf/ros:rolling-desktop-jammy`, which already includes a pre-installed ROS 2 environment.
      - The `RUN` instruction updates the package manager and installs additional ROS 2 packages using apt-get. These packages are specific to the ROS 2 distribution and provide additional functionalities and tools for working with ROS 2.
      - The `COPY` instruction copies the `ros2_entrypoint.sh` script to the root directory inside the container. This script is responsible for setting up the ROS 2 environment and configuring the entrypoint for the container.
      - Finally, the `ENTRYPOINT` instruction specifies that the `ros2_entrypoint.sh` script should be executed as the entrypoint for the container.
    - #### <a id="docker-server-sh"></a>`server.sh`
      - the code provides a set of commands (*run*, *start*, *enter*, *stop*) to manage the *Docker container* running the ROS2 environment. It allows you to *start*, *stop*, *enter* an interactive shell session, and manage the *Docker container* conveniently (but there are other [ways](#usefull-commands) too).
        ```bash
        # Navigate to the repository directory
        cd ros2_intro

        # Make the script executable
        chmod +x server.sh

        # Run the script
        ./server.sh

        # The following commands now are available
        ./server.sh run     # Start the Docker container
        # If the container is already running, it will not be restarted.
        # If the container is not running, it will be started


        ./server.sh start   # Start the Docker container (if already stopped)
        # If the container is already running, it will be stopped and then started again
        
        ./server.sh enter   # Enter an interactive shell session in the Docker container
        ./server.sh stop    # Stop the Docker container

        ```
        * Make sure to update
        `DOCKER_IMG="ros2_intro"
        DOCKER_CONATINER_NAME="fervent_banach"
        HOME_DIRECTORY="/home/$USER/ros2_container"` inside `server.sh` according to your image name, container name
    - `docker-compose.yml` file is used to define the configuration for running the ROS2 *Docker container*. It specifies the *Docker image* to use, container name, volume mappings, network configuration, environment variables, and other container-specific settings. By using the *Docker Compose* command (`docker-compose up`), the `.yml` file is read and the specified services (containers) are created and started based on the defined configuration. This allows for a convenient and reproducible way to manage and run complex Docker-based applications with multiple services.
      - To install `docker-compose`
        - `sudo apt update`
        - `sudo apt install docker-compose`
### Why Docker instead of usual installation?
- **Isolation and System Cleanliness**: When you install ROS2 directly on your Linux system, it can modify various system files and configurations. This makes it difficult to keep your system clean and avoid conflicts with other software. With a [Docker container](#docker-container), ROS2 and all its dependencies are installed within the container, separate from your main system. It provides an isolated environment specifically for running ROS2, without affecting your host operating system.
- **Dependency Management**: ROS2 has many dependencies that need to be installed and configured correctly for it to work smoothly. Managing these dependencies manually on your Linux system can be challenging, especially when you have multiple projects with different requirements. [Docker container](#docker-container) allow you to package your ROS2 environment with all its dependencies into an image. This image can be easily shared and run on any Linux system that has Docker installed, ensuring consistent dependencies across different environments.
- **Reproducibility and Collaboration**: [Docker containers](#docker-container) provide a reproducible environment for your ROS2 projects. By sharing the [Docker image](#docker-container) with others, they can recreate the exact same environment on their own systems. This eliminates the hassle of troubleshooting compatibility issues between different Linux distributions or versions. It allows for seamless collaboration on ROS2 projects, ensuring everyone is working with the same setup.
- **Portability**: [Docker containers](#docker-container) are highly portable. You can create a [Docker image](#docker-container) of your ROS2 environment and run it on any Linux system that supports Docker, regardless of the underlying hardware or operating system. This makes it easy to migrate your ROS2 projects across different machines or share them with others who may have different setups.
- **Easy Setup and Cleanup**: Docker simplifies the setup process for ROS2. Instead of manually installing ROS2 and its dependencies, which can be time-consuming and error-prone, you can simply pull the pre-built [Docker image](#docker-container) that contains a complete ROS2 environment. It provides a consistent and streamlined way to set up ROS2 without worrying about missing dependencies or configuration issues. Additionally, when you're done with a project, you can easily remove the [Docker container](#docker-container), leaving no traces of ROS2 on your Linux system.
- Overall, using [Docker container](#docker-container) for ROS2 provides a convenient, isolated, and reproducible environment for running ROS2 projects. It simplifies the setup process, improves collaboration, and ensures consistent dependencies across different systems. [Docker containers](#docker-container) are especially useful when working on multiple ROS2 projects, as they allow you to switch between different environments without conflicts.
### Creating docker container
```bash
# clone docker image from github
git clone url_for_image_from_github


# building container
cd intro_ros2/docker_image/
docker compose up --build
```
- Run command from [here](#docker-server-sh) and use command mentioned [there](#docker-server-sh) to start, enter, stop container.
- To work with with ROS2
  1. start container
  2. enter container
  3. stop container
   
<blockquote class="warning">
    <p><strong>Warning:</strong> I named my image = "ros2_intro" and my container's name is "fervent_banach". And that was assumed inside server.sh (), docker-compose.yml file. Please change contents inside them accordingly if you want to have different name</p>
    
    docker-compose.yml
    container_name: your_chosen_name_for_container, image: your_chosen_name_for_image:v1

    server.sh
    DOCKER_IMG="your_chosen_name_for_image"
    DOCKER_CONATINER_NAME="your_chosen_name_for_container"
</blockquote>

<style>
  .warning {
    background-color: #ffcccc;
    padding: 10px;
  }
</style>




### Usefull commands
  - `docker ps` - show you a list of running containers and their IDs
  - `docker exec -it container_name /bin/bash` - to enter container form terminal
  - **ROS environment is not properly set up in the container**
    ```bash
    # ROS distribution name
    # If you see the output as the ROS distribution name (e.g., "foxy", "galactic", etc.), it means the environment variable is set correctly.
    echo $ROS_DISTRO

    # If the ROS environment variables are not set, you need to source the ROS setup script. 
    . /opt/ros/$ROS_DISTRO/setup.sh

    # Replace $ROS_DISTRO with the appropriate ROS distribution name if it's not already set
    ```

## Git/Github
### Forking
1. Fork some repo from someone else's github to your github in github.com
2. clone forked repo to your local
    ```bash
    git clone <forked_repo_in_your_gh_account_url>
    ```
### Getting changes to forked repo from original repo
1. Ensure that your local repository is up to date with the forked repository. Open a terminal or command prompt and navigate to the root directory of your local repository.
   ```bash
    git checkout master
    git pull origin master
   ```
2. Add the original repository as an upstream remote. In the same terminal or command prompt, run the following command:
   ```bash
   git remote add upstream <original_repository_url>
   ```
3. Verify that the upstream remote was added successfully by running the following command:
   ```bash
   git remote -v
   ```
   You should see the URL of the original repository listed as "upstream"
4. Fetch the latest changes from the original repository. Run the following command:
   ```bash
   git fetch upstream
   ```
5.  Merge the fetched changes into your local repository. Run the following command:
    ```bash
    git merge upstream/master
    ```
    This command merges the changes from the `upstream/master` branch (the master branch of the original repository) into your local `master` branch
1. Push the updated changes to your forked repository on GitHub:
   ```bash
   git push origin master
   ```
## Bash
To run a `.sh` file (shell script file), you can follow these steps:
1. Open a terminal: Launch a terminal application on your Unix-like operating system. The terminal provides a command-line interface where you can execute commands.
2. Navigate to the directory containing the `.sh` file: Use the cd command to change your current directory to the location where the `.sh` file is located. For example, if the file is in the "Documents" folder, you can navigate there using the command: cd Documents.
3. Make the `.sh` file executable (if necessary): If the `.sh` file does not have the executable permission, you need to make it executable before running it. You can use the chmod command to add the executable permission. For example, to make the file named `script.sh` executable, run: `chmod +x script.sh`.
4. Run the `.sh` file: Once the `.sh` file is executable, you can execute it by typing its name preceded by `./`. For example, if the file is named `script.sh`, you can run it by typing: `./script.sh`.
5. Press Enter: After typing the command, press the Enter key to execute it.

The shell interpreter specified in the shebang line (the first line of the .sh file) will be used to execute the script. Commonly, the shebang line at the beginning of the file looks like this: `#!/bin/bash`, indicating that the script should be executed using the Bash interpreter.

Note: If the `.sh` file requires specific arguments or parameters, you can provide them after the file name when running the script. For example: `./script.sh arg1 arg2`.
