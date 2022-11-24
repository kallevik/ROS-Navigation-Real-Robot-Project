#! /usr/bin/env python

import rospy
from move_base_msgs.msg import MoveBaseAction, MoveBaseGoal
from geometry_msgs.msg import Pose

import actionlib

class SendGoal:
    def __init__(self, label):
        #When initialized a string with label will be given
        #label (corner1, corner2, pedestrian)  
        self.label = label 

        #Creates a SimpleActionClient which are to send msg over /move_base 
        #of type MoveBaseAction: MoveBaseActionGoal, MoveBaseActionResult, MoveBaseActionFeedback
        client = actionlib.SimpleActionClient('/move_base', MoveBaseAction)

        
        #Creates a msg of type geometry_msgs/Pose
        #Point position
        #Quaternion orientation
        goalPose = Pose()

        #Sets the Goal Coords
        goalPose.position.x = 0.0
        goalPose.position.y = 0.0
        goalPose.position.z = 0.0

        goalPose.orientation.x = 0.0
        goalPose.orientation.y = 0.0
        goalPose.orientation.z = 0.0

        #Creates a msg of type move_base_msgs/MoveBaseGoal.msg
        #geometry_msgs/PoseStamped target_pose
        goal = MoveBaseGoal()

        #Sends the newly created pose(above) to MoveBaseGoal()
        goal.target_pose.pose = goalPose

        goal.target_pose.header.frame_id = 'map'

        #ActionClient waits for connection to the /move_base topic
        client.wait_for_server()

        #ActionClient sends
        client.send_goal(goal)
        #ActionClient waits for response from server
        client.wait_for_result()
        result = client.get_state()
        print("Fuck")
        print(label)



    def shutdownhook(self):
        return

    def callback(self):
        print("In callback")
        return 


if __name__ =="__main__":
    rospy.init_node('test_node')
    obj = SendGoal('h')
    #rospy.spin()
