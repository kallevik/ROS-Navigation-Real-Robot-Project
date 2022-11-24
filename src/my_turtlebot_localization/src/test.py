#! /usr/bin/env python

import rospy 
import rosparam
from my_turtlebot_localization.srv import MyServiceMessage, MyServiceMessageResponse
from geometry_msgs.msg import Pose,PoseWithCovariance, PoseWithCovarianceStamped




rospy.init_node('spot_recorder') #/save_spot
data = rospy.wait_for_message('/amcl_pose', PoseWithCovarianceStamped, timeout=10)

label = "c2"
pose = data.pose.pose.position
f = open("spots.txt", "a") #r: read, w:write, a:append
f.write("\nlabel: {} \n{} ".format(label,pose))
f.close() 

f2 = open('newfile.txt','w+')
f2.close()