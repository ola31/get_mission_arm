#include "ros/ros.h"
#include "std_msgs/String.h"
#include "std_msgs/UInt16.h"

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

std::string command;
std::string command_stop1;
std::string command_stop2;
std::string command_stop3;
std::string command_stop4;
std::string command_stop5;
std::string command_stop6;
std::string command_stop7;

const char *c;

const char *a;
const char *d;
const char *o;
const char *p;
const char *s;

const char *m;
const char *j;


void mission_Callback(const std_msgs::UInt16 msg)
{/*
    if(msg.data == 1){
        ROS_INFO("Mission: AutoDriving");

        command = "gnome-terminal -- rosrun autodriving_state autodriving_state";
        command_stop1 = "rosnode kill /autodriving_state";
    }

    else if(msg.data == 2){
        ROS_INFO("Mission: Door");

        command = "gnome-terminal -- rosrun door_state door_state";
        command_stop2 = "rosnode kill /door_state";
    }

    else if(msg.data == 3){
        ROS_INFO("Mission: Obstacle");
        //command = "gnome-terminal -- rosrun lidar_range wall_following";
        //command_stop3 = "rosnode kill /wall_following";
        command = "gnome-terminal -- rosrun turtlesim turtlesim_node";
        command_stop3 = "rosnode kill /turtlesim";
    }

    else if(msg.data == 4){
        ROS_INFO("Mission: Parking");

        command = "gnome-terminal -- rosrun lidar_range drok3_parking";
        command_stop4 = "rosnode kill /drok3_parking";
    }

    else if(msg.data == 5){
        ROS_INFO("Mission: Stair");
        //command = "roslaunch ";
    }

    else if(msg.data == 60){
        ROS_INFO("md_driver start");

        command = "gnome-terminal -- rosrun md_driver md_driver_demo_node";
        c = command.c_str();
        system(c);
    }

    else if(msg.data == 70){
        ROS_INFO("Joystick start");

        command = "gnome-terminal -- roslaunch rosjoy_to_cmdvel rosjoy_to_cmdvel.launch";
        c = command.c_str();
        system(c);
    }


    else if(msg.data == 0){
        ROS_INFO("Mission Start!!");

        c = command.c_str();
        system(c);
    }

    else if(msg.data == 9){
        ROS_INFO("Mission All Stop!!");

        a = command_stop1.c_str();
        d = command_stop2.c_str();
        o = command_stop3.c_str();

        system(a);
        system(d);
        system(o);
        //system(p);
        //system(s);
    }

    if(msg.data == 20){
        ROS_INFO("Front CAM ON");
        std::string command_cam = "gnome-terminal -- roslaunch usb_cam usb_cam-test.launch video_divice:=/dev/vidio0";
        const char *c_cam = command.c_str();
        system(c_cam);
    }




    if(msg.data == 11){
        //command_stop1 = "rosnode kill /autodriving_state";
        a = command_stop1.c_str();
        system(a);
    }
    else if(msg.data == 12){
        //command_stop2 = "rosnode kill /door_state";
        d = command_stop2.c_str();
        system(d);
    }
    else if(msg.data == 13){
        //command = "rosnode kill /wall_following";
        o = command_stop3.c_str();
        system(o);
    }
    else if(msg.data == 14){
        //command = "rosnode kill /drok3_parking";
        p = command_stop4.c_str();
        system(p);
    }
    else if(msg.data == 15){
        //command = "rosnode kill /door_state";
        //system(command);
    }

    else if(msg.data == 61){
        command_stop6 = "rosnode kill /md_driver_node";
        m = command_stop6.c_str();
        system(m);
    }

    else if(msg.data == 71){
        command_stop7 = "rosnode kill /joy_node /rosjoy_2_cmdvel_node /teleop_twist_joy";
        j = command_stop7.c_str();
        system(j);
    }

    else if(msg.data == 21){
        std::string command_stop_cam = "rosnode kill /usb_cam";
        const char *stop_cam_c = command_stop7.c_str();
        system(stop_cam_c);
    }
    

    if(msg.data == 99){

    }

*/

  if(msg.data == 100){
      std::string command_arm = "gnome-terminal -- roslaunch open_manipulator_controller open_manipulator_controller.launch";
      const char *arm_c = command_arm.c_str();
      system(arm_c);
  }

  else if(msg.data == 110){
      std::string command_arm_joy = "gnome-terminal -- roslaunch open_manipulator_teleop open_manipulator_teleop_joystick.launch";
      const char *arm_joy_c = command_arm_joy.c_str();
      system(arm_joy_c);
  }

  else if(msg.data == 120){
      //std::string command_arm_key = "gnome-terminal -- roslaunch open_manipulator_teleop open_manipulator_teleop_keyboard.launch";
      std::string command_arm_key = "gnome-terminal -- rosrun open_manipulator_teleop open_manipulator_teleop_keyboard_sub";

      const char *arm_key_c = command_arm_key.c_str();
      system(arm_key_c);
  }
  else if(msg.data == 130){
      std::string command_arm_service = "gnome-terminal -- roslaunch open_manipulator_teleop open_manipulator_teleop_xyz.launch";
      const char *arm_service_c = command_arm_service.c_str();
      system(arm_service_c);
  }
  else if(msg.data == 40){
      std::string command_arm_service = "gnome-terminal -- roslaunch usb_cam usb_cam-test.launch";
      const char *cam_c = command_arm_service.c_str();
      system(cam_c);
  }



  if(msg.data == 101){
      std::string command_arm_stop = "rosnode kill /open_manipulator_controller";
      const char *arm_stop_c = command_arm_stop.c_str();
      system(arm_stop_c);
  }

  else if(msg.data == 111){
      std::string command_arm_joy_stop = "rosnode kill /teleop_joystick";
      const char *arm_stop_joy_c = command_arm_joy_stop.c_str();
      system(arm_stop_joy_c);
  }

  else if(msg.data == 121){
      std::string command_arm_key_stop = "rosnode kill /open_manipulator_teleop_keyboard_woo";
      const char *arm_stop_key_c = command_arm_key_stop.c_str();
      system(arm_stop_key_c);
  }
  else if(msg.data == 131){
      std::string command_arm_service_stop = "rosnode kill /teleop_xyz";
      const char *arm_stop_service_c = command_arm_service_stop.c_str();
      system(arm_stop_service_c);
  }
  else if(msg.data == 41){
      std::string command_arm_service_stop = "rosnode kill /usb_cam_arm /exchange_image";
      const char *cam_stop_c = command_arm_service_stop.c_str();
      system(cam_stop_c);
  }

}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "getmission_arm");
    ros::NodeHandle nh;

    ros::Subscriber sub = nh.subscribe("/mission", 10, mission_Callback);

    ros::spin();

    return 0;
}
