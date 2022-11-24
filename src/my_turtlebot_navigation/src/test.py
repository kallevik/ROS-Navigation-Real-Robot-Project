#! /usr/bin/env python
import yaml 
import rosparam
import os

#path = '/home/user/catkin_ws/src/my_turtlebot_localization/spot.yaml'
label = 'table'
spots = rosparam.load_file("spot.yaml")




for params, name in spots:
    for key, value in params.items():
        print("\nkey: ", key)
        print("-------")
        print("value: ", value)
        print("-------")
        for k, v in value.items():
            print("k: ",k)
            print("v: ", v)
        #if key == label:
         #   print(key)
          #  print(value)
            #print(value.position)
            #rosparam.upload_params(name, params) 