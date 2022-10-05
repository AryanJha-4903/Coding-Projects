from itertools import count
import math
import os
import random
import re
import sys

#
# Complete the 'marsExploration' function below.
#
# The function is expected to return an INTEGER.
# The function accepts STRING s as parameter.
#

def marsExploration(s):
    # Write your code here
   count=0
   required_string="SOS"*(len(s)//3)
   for i,j in zip(s,required_string):
       if i!=j:
           count+=1
   return count       
#driver code   
s=input()     
print(marsExploration(s))
