///@file AIR_proxy_node.cpp
///@author Yongsheng Yang (vinsonsheep2020@163.com)
///@brief 
///@version 1.0
///@date 2022-05-15
///
///@copyright Copyright (c) 2022
///

#include "radio_proxy/A3_proxy.h"
// #include "radio_proxy/N3_proxy.h"
// #include "radio_proxy/PX4_proxy.h"

int main(int argc, char *argv[])
{
    setlocale(LC_ALL,"");
    ros::init(argc,argv,"AIR_proxy");

    ros::NodeHandle nh;

    ros::Duration(3).sleep();

    
    radio_proxy::A3_proxy dp;
    // radio_proxy::N3_proxy dp;
    // radio_proxy::PX4_proxy dp;

    ros::spin();

    return 0;
}