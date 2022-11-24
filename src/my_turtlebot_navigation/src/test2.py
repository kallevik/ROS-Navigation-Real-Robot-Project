#! /usr/bin/env python
import rosparam
import os 
import yaml
"""
#os.chdir("/home/user/catkin_ws/src/my_summit_localization/spots")
spots = rosparam.load_file("spots.yaml")

for params, name in spots:
    for key, value in params.items():
        print(key)
        print(value)
"""

"""

with open('cons.yaml','r') as f:
    data = yaml.load(f)

for week, teams in data.items():
    for team in teams.keys():
        print(team)
        print(team)
        #print('{}: {}'.format(key, team))
        """

if __name__ == '__main__':

    stream = open("foo.yaml", 'r')
    dictionary = yaml.load(stream)
    for key, value in dictionary.items():
        print (key + " : " + str(value))