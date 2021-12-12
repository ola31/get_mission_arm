#include "ros/ros.h"
#include "std_msgs/String.h"
#include <std_msgs/UInt16.h>
#include <std_msgs/Bool.h>

int main(int argc, char **argv)
{
    ros::init(argc, argv, "getmission_arm_ready");
    ros::NodeHandle nh;

    ros::Publisher getmission_ready = nh.advertise<std_msgs::Bool>("/getmission_arm_ready", 100);

    ros::Rate loop_rate(10);
    while (ros::ok())
    {
        std_msgs::Bool ready;
        ready.data = 1;

        getmission_ready.publish(ready);

        ros::spinOnce();

        loop_rate.sleep();
    }

    return 0;
}
