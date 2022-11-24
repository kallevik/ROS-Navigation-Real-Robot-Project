#! /usr/bin/env python

import rospy 
import rosparam
from my_turtlebot_localization.srv import MyServiceMessage, MyServiceMessageResponse
from geometry_msgs.msg import PoseWithCovarianceStamped

"""
Service Server for writing pose of robot to file
To call service: rosservice call /save_spot "label: 'label_name'"
"""

path = '/home/user/catkin_ws/src/my_turtlebot_localization/src/spots.txt'

def srv_callback(request):
    label = request.label #input to server:/save_spot (corner1, corner2, pedestrian)
    response = MyServiceMessageResponse()
    data = rospy.wait_for_message('/amcl_pose', PoseWithCovarianceStamped, timeout=10)
    pose = data.pose.pose#.position
    pos = data.pose.pose.position
    ori = data.pose.pose.orientation

    if label=="end":
        rospy.signal_shutdown("end provided")
   
    #with open(path,'w+') as f:
    f.write("label: {}\n{}\n\n".format(label,pose))

   
    response.navigation_successfull = True
    response.message = "Printed pose in " + str(label) +" to spots.txt"
    return response



if __name__ == "__main__":

    with open(path,'w+') as f:
        rospy.init_node('spot_recorder', disable_signals=True)
        my_service = rospy.Service('/save_spot',MyServiceMessage, srv_callback) 

        print("\nService Stared\n")
        rospy.spin()    