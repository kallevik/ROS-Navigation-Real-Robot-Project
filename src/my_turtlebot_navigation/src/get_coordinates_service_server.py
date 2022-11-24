#! /usr/bin/env python
"""
takes a string as input(spot) and looks up coordinates to this spot in 
file (spot.yaml)
rosserice call /get_coordiantes 

"""
import os
import rospy

import rosparam
from my_turtlebot_navigation.srv import MyServiceMessage, MyServiceMessageResponse
from send_coordinates_action_client import SendGoal
#path = '~/catkin_ws/src/my_turtlebot_localization/spot.yaml'


class GetGoal:
    def __init__(self):
        #Initialize a service which are to *** over /get_coordiantes
        #of type MyServiceMessage: 
        self.service = rospy.Service('/get_coordinates',MyServiceMessage , self.srv_callback)



    def srv_callback(self, request):
        print("In callback")
        #
        label = request.label 
        #
        response = MyServiceMessageResponse()
    
        os.chdir("/home/user/catkin_ws/src/my_turtlebot_navigation/src")
        spots = rosparam.load_file("spot.yaml")
        

        for params, name in spots:
            for key, value in params.items():
                if key == request.label:
                    print("Key: ", key)
                    print("\nname: ", name)
                    print("\nparams: ", params)
                    rosparam.upload_params(name, params) 

        #SendGoal(request.label)

        response.navigation_successfull = True
        response.message = "Goal Reached"
        return response




if __name__ =="__main__":
    rospy.init_node('get_coordinates_node')
    get_coordiantes_obj = GetGoal()
    print("\n Service Started \n")
    rospy.spin()
