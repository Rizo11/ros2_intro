
- [Introduction to ROS2](#introduction-to-ros2)
  - [Course Structure :space\_invader:](#course-structure-space_invader)
  - [ROS](#ros)
    - [What is ROS and Why ROS](#what-is-ros-and-why-ros)
    - [ROS Philosophy](#ros-philosophy)
    - [ROS in the example of Spot](#ros-in-the-example-of-spot)
    - [ROS Structure](#ros-structure)
    - [ROS File System](#ros-file-system)
    - [ROS vs ROS2](#ros-vs-ros2)
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


## ROS

<div style="text-align: center;">
  <img src="assets/ros.jpeg" alt="Alt Text">
</div>

The *Robot Operating System* a.k.a __ROS__ is an operating system for robots. Similar to the operating systems of PCs, servers, or stand-alone devices.

It provides services similar to an operating system (hardware abstraction, management of concurrency, processes, etc.) but also high-level functionalities (asynchronous calls, synchronous calls, centralized database of data, configuration system robot …) [[1]](https://just-merwan.medium.com/all-you-need-to-know-to-get-started-with-ros-the-robot-operating-system-a811ed6b9014).

### What is ROS and Why ROS
- **ROS**, the Robot Operating System, is a powerful framework used for developing and controlling robots. It provides a collection of software libraries, tools, and conventions that help engineers and researchers build advanced robotic systems. Let's explore why we need **ROS** with some examples:

  - **Modularity and Reusability**: **ROS** promotes a modular approach to robotics development. It allows us to break down complex robot systems into smaller, reusable components called nodes. For example, we can have separate nodes for controlling the robot's movement, processing sensor data, and performing high-level decision-making. These nodes can be developed and tested independently, making it easier to reuse and share code across different robots or projects.

  - **Communication and Message Passing**: **ROS** enables seamless communication between different parts of a robot system. Nodes can send messages to each other, sharing information such as sensor readings, commands, or even images. For instance, a camera node can publish images, and another node responsible for image processing can subscribe to those images to detect objects. This communication facilitates coordination and collaboration between robot components.

  - **Visualization and Debugging**: **ROS** provides tools for visualizing and debugging robot systems. One such tool is RViz, which allows us to visualize sensor data, robot models, and trajectories in a 3D environment. For example, we can use RViz to visualize the laser scan data from a robot's range sensor or to debug the path planning algorithm by visualizing the planned trajectory.

  - **Simulation and Testing**: **ROS** offers simulation capabilities through tools like Gazebo. Simulation allows us to test and validate robot behavior in a virtual environment before deploying it on real hardware. For example, we can simulate a drone's flight dynamics and control algorithms in Gazebo to evaluate its performance or test different navigation strategies without the risk of damaging physical equipment.

  - **Community and Collaboration**: **ROS** has a large and active community of researchers, developers, and robotics enthusiasts. This community contributes to the development of **ROS** by sharing code, creating packages, and providing support. For example, numerous open-source packages exist for various robotic tasks, such as mapping, perception, and manipulation. These packages can be leveraged to jumpstart robot development and accelerate progress.

  - **Robotics Education and Research**: **ROS** serves as an excellent platform for learning and teaching robotics. Its ease of use, extensive documentation, and abundant learning resources make it accessible for educational institutions and students to understand and experiment with robotic concepts. Moreover, researchers can use **ROS** to prototype new algorithms, conduct experiments, and validate their findings in a standardized and reproducible manner.

  - In summary, **ROS** provides a modular and flexible framework that facilitates communication, visualization, simulation, and collaboration in robotics. It promotes code reuse, simplifies debugging, and accelerates development. With **ROS**, engineers and researchers can focus on building innovative robot applications by leveraging the capabilities of a thriving community and a rich ecosystem of packages and tools.


<div style="text-align: center;">
  <img src="assets/bicycle.jpg" alt="Alt Text">
</div>

- Before the advent of ROS (Robot Operating System), the development of robots was often fragmented and lacked a standardized framework. Let's explore some of the problems that existed before ROS and how ROS addressed them:

  - Lack of Standardization:
    - Before ROS: Robotics development involved reinventing the wheel for each project, as there was no standardized framework for building robot software. Each project had to develop its own communication protocols, driver interfaces, and tools, leading to significant duplication of effort.
    - With ROS: ROS provided a standardized and modular framework for building robot software. It introduced a common communication architecture, message passing, and package management system. This allowed developers to leverage existing libraries and tools, saving time and effort. For example, instead of writing custom code for communication between modules, developers can use ROS's messaging system to easily exchange data between different components of a robot.

  - Limited Code Reusability:
    - Before ROS: Reusing code across different robot projects was challenging due to the lack of a shared framework. Developers often had to start from scratch or adapt code from previous projects, leading to inefficiencies and reduced productivity.
    - With ROS: ROS introduced a package-based architecture that promotes code reuse. Developers can create and share packages that encapsulate functionality for specific tasks or components. For instance, packages for perception, motion planning, or control can be reused across different robots, saving development time and fostering collaboration within the robotics community.

  - Communication and Integration Challenges:
    - Before ROS: Integrating hardware components, such as sensors and actuators, with software was a complex and time-consuming task. Developing custom drivers and managing communication between different components required significant effort.
    - With ROS: ROS provided a communication infrastructure that simplifies the integration of hardware and software components. It offers standardized interfaces and protocols for connecting sensors, actuators, and other robot modules. For example, developers can utilize existing ROS drivers for popular sensors like cameras or LIDARs, allowing easier integration with the robot's perception system.

  - Limited Tools for Visualization and Debugging:
    - Before ROS: Visualizing and debugging robot behavior, sensor data, and internal states were challenging due to the lack of standardized tools. Developers often had to build custom visualization and debugging tools for each project.
    - With ROS: ROS introduced powerful visualization and debugging tools like RViz and RQT, which provide real-time visualizations of robot states, sensor data, and message passing. These tools make it easier to understand and debug complex robot behaviors, aiding in the development and testing process.

  - Community Collaboration:
    - Before ROS: Collaboration and knowledge sharing among robotics researchers and developers were limited. There was no centralized platform for sharing code, algorithms, or best practices.
    - With ROS: ROS created a vibrant community and an ecosystem for collaboration. Developers can share their work through ROS packages, participate in forums, and contribute to open-source projects. This collaboration accelerates the development of robotics technologies and promotes the exchange of ideas and solutions.

- Overall, ROS addressed the challenges of standardization, code reusability, communication, visualization, and community collaboration in robotics development. It provided a common framework and tools, enabling developers to focus on higher-level tasks rather than reinventing basic functionalities. ROS fostered a collaborative environment where developers can build upon each other's work, accelerating the progress and adoption of robotics technology.

### ROS Philosophy
<div style="text-align: center;">
  <img src="assets/philosophy.png" alt="Alt Text">
</div>

1. **Modularity**: ROS promotes a modular approach to building robot systems. It encourages breaking down complex tasks into smaller, manageable components that can communicate with each other. This modular design enables code reuse and facilitates collaboration within the robotics community. For example, in a robot with perception, planning, and control modules, ROS allows each module to be developed and tested independently, ensuring flexibility and maintainability.

2. **Peer-to-Peer Communication**: ROS emphasizes peer-to-peer communication between modules, enabling them to exchange data and messages seamlessly. This communication is based on a publish-subscribe model, where nodes can publish information (e.g., sensor data) and subscribe to relevant data streams from other nodes. For instance, in a self-driving car, the perception module can publish information about detected objects, which the planning module can subscribe to in order to make informed decisions.

3. **Tools and Libraries**: ROS provides a rich set of tools and libraries to support robotics development. These tools simplify tasks such as visualizing robot states, debugging code, and managing software dependencies. For example, RViz allows developers to visualize the robot's environment and monitor its sensor data in real-time, aiding in the development and testing process.

4. **Code Reusability**: ROS encourages the development and sharing of reusable software components. Developers can create packages that encapsulate specific functionalities, such as mapping, localization, or control algorithms. These packages can be easily integrated into different robot projects, saving time and effort. For instance, a package developed for object recognition can be reused in various robots with different sensors and hardware configurations.

5. **Community Collaboration**: ROS fosters a collaborative environment where developers and researchers can share knowledge, code, and best practices. The ROS community actively contributes to the development of new packages, tools, and algorithms, making them available to the wider community. This collaboration accelerates the advancement of robotics technology and encourages learning and innovation.

### ROS in the example of Spot

<div style="text-align: center;">
  <img src="assets/spot.jpeg" alt="Alt Text">
</div>

- **Hardware Integration**:
  - Spot has various hardware components such as cameras, **LIDARs**, and motor controllers. ROS2 allows seamless integration of these components through the use of ROS2 packages and drivers. For example, ROS2 provides packages like `ros2_camera` to interface with Spot's cameras and `ros2_lidar` to handle **LIDAR** data.

- **Perception and Mapping**:
  - Spot relies on perception to understand its surroundings. ROS2 offers perception libraries and algorithms that can be utilized. For instance, Spot can utilize the `ros2_pointcloud_library` (PCL) to process point cloud data from its **LIDAR** sensor and create a 3D map of the environment. This enables Spot to navigate and make informed decisions based on its perception of the surroundings.

- **Motion Control**:
  - ROS2 facilitates motion control for Spot. For instance, ROS2's `ros2_control` package provides a framework for defining and controlling robot joints and actuators. This allows developers to implement controllers for Spot's legs and body, enabling precise and coordinated movements.

- **Behavior and Decision-Making**:
  - ROS2 enables the development of high-level behaviors and decision-making processes for Spot. Developers can use ROS2's *computational graph-based architecture* to create behavior trees or state machines. For example, Spot can have behaviors like *"walk forward"*, *"turn left"*, or *"stop and sit"*. These behaviors can be implemented using ROS2's message passing and node communication capabilities.

- Communication and Coordination:
  - ROS2's communication infrastructure enables seamless communication and coordination between Spot's software components. For example, Spot's perception module can publish sensor data like camera images and **LIDAR** scans using ROS2 messages. The control module can subscribe to these messages to make decisions and send commands to the motion control module, allowing coordinated movement based on perception.

- Simulation and Testing:
  - ROS2 supports simulation environments like **Gazebo**, which can be used to simulate Spot's behavior and test different control algorithms or scenarios. Developers can create a virtual representation of Spot in **Gazebo** and validate its performance before deploying the code on the actual hardware. This helps identify and fix issues early in the development process.

- Monitoring and Debugging:
  - ROS2 provides tools for monitoring and debugging Spot's behavior in real-time. Developers can use tools like **RViz** to visualize Spot's sensor data, such as camera images or **LIDAR** scans. They can also use the `rqt` toolset to monitor node activity, inspect message data, and debug issues. These tools aid in identifying and resolving any problems during development.

- By utilizing the capabilities of ROS2, developers can build a sophisticated robot like Spot with modular and interconnected software components. ROS2's extensive package ecosystem, communication infrastructure, simulation support, and debugging tools make it a powerful framework for building and controlling robots like Spot.


### ROS Structure
<div style="text-align: center;">
  <img src="assets/structure.png" alt="Alt Text">
</div>

- **Nodes**: Nodes in ROS 2 are similar to nodes in ROS 1. They represent individual software modules that perform specific tasks or computations e.g. controlling the wheel motors or publishing the sensor data from a laser range-finder. Each node can send and receive data from other nodes via topics, services, actions, or parameters. For example, you can have nodes for perception, planning, control, and communication in a robot system. Each node operates independently and can communicate with other nodes.
  <div style="text-align: center;">
  <img src="assets/nodes.gif" alt="Alt Text">
  </div>
- A full robotic system is comprised of many nodes working in concert. In ROS 2, a single executable (C++ program, Python program, etc.) can contain one or more nodes.
- [more about nodes](https://docs.ros.org/en/foxy/Tutorials/Beginner-CLI-Tools/Understanding-ROS2-Nodes/Understanding-ROS2-Nodes.html)

- **Topics and Publishers/Subscribers**: ROS 2 retains the concept of topics for communication between nodes, but introduces a more flexible and efficient messaging system. ROS 2 breaks complex systems down into many modular nodes. Topics are a vital element of the ROS graph that act as a bus for nodes to exchange messages. Publishers are nodes that publish messages on a specific topic, and subscribers are nodes that receive and process those messages. For example, a camera node can publish images on a "camera" topic, and the perception module can subscribe to that topic to process the camera data. A node may publish data to any number of topics and simultaneously have subscriptions to any number of topics. Topics are one of the main ways in which data is moved between nodes and therefore between different parts of the system.
  <div style="text-align: center;">
  <img src="assets/topic.gif" alt="Alt Text">
  </div>
- [more about topics](https://docs.ros.org/en/rolling/Tutorials/Beginner-CLI-Tools/Understanding-ROS2-Topics/Understanding-ROS2-Topics.html)

- **Services and Clients/Servers**: Services are another method of communication for nodes in the ROS graph. Services are based on a call-and-response model versus the publisher-subscriber model of topics. While topics allow nodes to subscribe to data streams and get continual updates, services only provide data when they are specifically called by a client. Similar to ROS 1, ROS 2 supports services for requesting and receiving specific computations or tasks. Clients send service requests to servers, which then provide the requested functionality and send back a response. For example, a *control node* can send a service request to a *planning node*, asking for a path plan, and receive a planned trajectory as a response.
  <div style="text-align: center;">
  <img src="assets/service.gif" alt="Alt Text">
  </div>

- **Actions**: ROS 2 introduces the concept of actions, which allow for more complex and long-running behaviors compared to services. Actions provide a way for clients to send a request to a server and receive periodic feedback until the request is completed. For instance, a robot's *navigation module* can use an action to request a move to a specific location while receiving progress updates.
- Actions are one of the communication types in ROS 2 and are intended for long running tasks. They consist of three parts: a `goal`, `feedback`, and a `result`.
- Actions are built on topics and services. Their functionality is similar to services, except actions can be canceled. They also provide steady feedback, as opposed to services which return a single response.
- Actions use a client-server model, similar to the publisher-subscriber model (described in the topics tutorial). An “action client” node sends a goal to an “action server” node that acknowledges the goal and returns a stream of feedback and a result.
  <div style="text-align: center;">
  <img src="assets/action.gif" alt="Alt Text">
  </div>
- [more about actions](https://docs.ros.org/en/rolling/Tutorials/Beginner-CLI-Tools/Understanding-ROS2-Actions/Understanding-ROS2-Actions.html)

- **Parameters**: ROS 2 includes a parameter system similar to ROS 1. Parameters are used to store and share configuration settings across nodes. They allow dynamic changes to node behavior without modifying the source code. For example, parameters can be used to set the maximum speed of a robot's motors or adjust the sensitivity of a sensor.
- You can think of parameters as node settings. A node can store parameters as integers, floats, booleans, strings, and lists. In ROS 2, each node maintains its own parameters. For more background on parameters, please see the [concept document](https://docs.ros.org/en/rolling/Concepts/About-ROS-2-Parameters.html).
- [more about parameters](https://docs.ros.org/en/rolling/Tutorials/Beginner-CLI-Tools/Understanding-ROS2-Parameters/Understanding-ROS2-Parameters.html)

- **Launch Files**: Similar to ROS 1, ROS 2 also uses launch files to start and configure multiple nodes together. Launch files specify which nodes to run, their parameters, and connections between topics, services, and actions. Launch files simplify the deployment and configuration of complex robot systems.
- In most of the introductory tutorials, you have been opening new terminals for every new node you run. As you create more complex systems with more and more nodes running simultaneously, opening terminals and reentering configuration details becomes tedious.
- Launch files allow you to start up and configure a number of executables containing ROS 2 nodes simultaneously.
- Running a single launch file with the `ros2 launch` command will start up your entire system - all nodes and their configurations - at once.
  <div style="text-align: center;">
  <img src="assets/launchfile.jpg" alt="Alt Text">
  </div>
- [more about launch files](https://docs.ros.org/en/rolling/Tutorials/Beginner-CLI-Tools/Launching-Multiple-Nodes/Launching-Multiple-Nodes.html)

- **Data Distribution Service (DDS)**: ROS 2 utilizes the DDS communication middleware, which provides efficient and scalable data exchange between nodes. DDS ensures real-time communication, reliable message delivery, and robustness in large-scale systems. It enables nodes to communicate directly with each other, eliminating the need for a central master node.
  <div style="text-align: center;">
  <img src="assets/DDS.jpg" alt="Alt Text">
  </div>
- In simple words, the Data Distribution Service (DDS) is a communication middleware that allows different parts of a system to exchange data with each other reliably and efficiently.

  - Imagine you have a group of friends sitting around a table, and they need to share information with each other. Instead of one person speaking at a time and everyone listening, DDS enables everyone to talk directly to each other simultaneously.

  - In the context of robotics or distributed systems, DDS serves as a communication backbone. It provides a way for different components or nodes (such as sensors, controllers, or actuators) to communicate directly with each other without relying on a central coordinator.

  - DDS ensures that messages are delivered reliably and in real-time, meaning they arrive at their intended destination without being lost or delayed. It handles the complexities of communication, such as managing network connections, routing messages, and resolving conflicts. This allows the components of a system to collaborate seamlessly and efficiently.

  - Think of DDS as a sophisticated messaging system that enables efficient and reliable communication between various parts of a system, making it possible for them to work together effectively. It enhances the overall performance, scalability, and responsiveness of distributed applications, including complex robotics systems.
- Imagine you have a robot called Spot that needs to perform various tasks, such as navigating, sensing its environment, and interacting with humans. To accomplish these tasks, Spot relies on different components, such as cameras, sensors, controllers, and decision-making modules. Now, let's see how DDS comes into play:
  - **Efficient and Direct Communication**: DDS enables efficient and direct communication between the components of Spot. For instance, Spot's camera can send images directly to the perception module, the sensors can provide data directly to the control module, and the decision-making module can send commands directly to the actuators. This direct communication allows Spot's components to exchange information quickly and without unnecessary delays.
  - **Reliable Message Delivery**: DDS ensures that messages exchanged between Spot's components are reliably delivered. If the perception module sends a message containing information about detected objects, DDS guarantees that this message reaches the decision-making module without being lost or corrupted. This reliability is crucial for Spot to make accurate decisions based on up-to-date information.
  - **Real-time Communication**: DDS supports real-time communication, meaning that Spot's components can exchange information with low latency. For example, if Spot's control module needs to send commands to the actuators for immediate action, DDS ensures that these commands reach the actuators in a timely manner, enabling Spot to respond quickly to changes in its environment.
  - **Scalability and Flexibility**: DDS is designed to handle large-scale systems, allowing Spot to scale its capabilities as needed. As Spot's functionality grows or additional components are added, DDS can handle the increased communication load without compromising performance. This scalability and flexibility are essential for Spot to adapt to different environments and perform complex tasks.
- **Composition**: in ROS 2 refers to the ability to build complex robot systems by combining multiple smaller components or nodes together. Think of it as assembling a robot system from different building blocks, where each block represents a specific functionality or task.
  - Here's an example to illustrate composition in ROS 2:
  - Imagine you're building a robotic system that includes a mobile base, an arm, and a camera. Each of these components can be implemented as individual nodes within a ROS 2 system.
  - `Mobile Base Node`: This node controls the movement and navigation of the robot's mobile base. It receives commands to move forward, backward, turn, etc., and controls the base motors accordingly.
  - `Arm Node`: This node controls the robotic arm attached to the robot. It receives commands to perform actions like picking up an object, placing it somewhere, or performing specific movements.
  - `Camera Node`: This node captures images from the robot's camera and provides visual information about the robot's surroundings.
  - Now, with composition in ROS 2, you can combine these nodes to create a more sophisticated robot system:
  - `Composition Node`: This node serves as a "master" node that brings together the mobile base, arm, and `camera nodes`. It coordinates their activities and enables them to work together as a unified system.
  - For example, when the `composition node` receives a command to pick up an object, it can pass that command to both the mobile `base node` and the `arm node`. The mobile `base node` will start moving the robot towards the object's location, while the `arm node` positions the arm for picking it up. Meanwhile, the `camera node` continues to provide live images of the surroundings, allowing the `composition node` to make informed decisions based on the visual data.
  - Composition allows you to build complex robot systems by combining different nodes with specific functionalities, enabling them to work together seamlessly. It promotes modularity, reusability, and scalability in robotics development, as you can add or remove nodes as needed to customize the behavior of the overall system.
  - By leveraging composition in ROS 2, you can create robot systems that integrate various capabilities, such as perception, manipulation, and mobility, enabling them to perform sophisticated tasks and interact with their environment effectively.
  - 
  <div style="text-align: center;">
  <img src="assets/ecosystem.png" alt="Alt Text">
  </div>
- **Packages:**
  - A package is a basic unit of software organization in ROS 2. It contains one or more nodes, libraries, configuration files, and resources that are related to a specific functionality or task. Think of a package as a folder that holds all the necessary files and code for a particular module or component of a robot system.

  - For example, let's consider a package named `robot_control`. This package may include nodes responsible for controlling the robot's movement, such as one node for the base controller and another for the arm controller. Additionally, it may contain configuration files, launch files, and other resources required for these nodes to function properly.

  - Packages provide modularity and encapsulation, making it easier to develop, test, and reuse code. They allow developers to focus on specific functionalities or components of a robot system while maintaining separation from other modules.
- **Stacks:**
  - A stack is a collection of related packages grouped together to form a higher-level software component. It represents a set of packages that work together to provide a more comprehensive functionality or capability. Stacks allow for the organization of packages that are conceptually linked or belong to the same project or system.

  - For example, let's say you are building a robot that performs various tasks such as mapping, localization, and navigation. You can create a stack named `robot_navigation` that includes packages like `map_builder`, `localization_engine`, and `path_planner`. Each package within the stack focuses on a specific aspect of the navigation functionality.

  - Stacks help manage dependencies between packages and provide a higher-level organization of software components. They allow for easier distribution, installation, and maintenance of a set of related packages.
- **Repository**:
  - a repository refers to a collection of packages or stacks that are hosted together in a version control system (VCS) repository, such as Git. It provides a centralized location where developers can store and manage their ROS 2 projects, making it easier to collaborate, share code, and track changes.
  - Here's a breakdown of the concept of a repository in ROS 2:
    1. **Version Control System (VCS)**: A version control system is a software tool used to track changes in files and code over time. ROS 2 primarily utilizes Git, a popular distributed version control system. With a VCS, developers can manage different versions of their code, collaborate with others, and maintain a history of changes.
    2. **Repository**: In the context of ROS 2, a repository is a collection of packages or stacks that are stored together within a VCS. It serves as a central location where developers can organize and distribute their ROS 2 projects. A repository can contain multiple packages, stacks, or even other repositories as submodules.
    3. **ROS Package Index (ROS Index)**: The ROS Package Index (also known as ROS Index or index.ros.org) is a community-driven online resource that serves as a repository aggregator. It provides a curated list of ROS 2 repositories, packages, and stacks, making it easier for users to discover and access available resources for their projects.
  - By hosting packages and stacks in a repository, developers can manage and version their code, share it with others, and collaborate on ROS 2 projects more effectively. It allows for easier distribution, installation, and integration of software components within the ROS 2 ecosystem. Additionally, repositories can be indexed in the ROS Index to provide a centralized resource for the ROS community to find and explore available ROS 2 packages and stacks.

### ROS File System
- The ROS (Robot Operating System) File System, also known as the "ROSFS," is a specific file system used within the ROS framework for organizing and managing files related to robotic applications.

- In simple terms, the ROS File System provides a structured way to store and access files and data used by ROS-based robots and applications. It follows a specific directory structure designed to support the development, deployment, and execution of robotic software.

- At the core of the ROS File System is the concept of packages. A package is a collection of files, including source code, configuration files, and data, that are related to a specific functionality or component of a robot or application. Packages help in modularizing and organizing the codebase, making it easier to develop and maintain complex robotic systems.

- Within a package, there are several directories, each serving a specific purpose. For example, the `src` directory typically contains the source code files, while the `launch` directory holds configuration files for launching different components of the robot or application.

- Additionally, the ROS File System provides a command-line tool called `roscd` that allows users to navigate to the directories of specific packages easily. It helps developers and users locate and access the files they need quickly.

- The ROS File System plays a crucial role in enabling communication and data exchange between different software components in a ROS-based system. By following the file system conventions, developers can easily share and reuse packages across different projects, promoting collaboration and code sharing within the ROS community.

- In summary, the ROS File System is a specialized file organization and management system used in the ROS framework for developing robotic applications. It provides a standardized structure for packages, directories, and files, facilitating the development, deployment, and execution of ROS-based software.
Free Research Preview. ChatGPT may produce inaccurate information about people, places, or facts. ChatGPT May 24 Version
### ROS vs ROS2
<div style="text-align: center;">
  <img src="assets/structure.png" alt="Alt Text">
</div>

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
