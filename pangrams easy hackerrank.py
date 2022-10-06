import math
import os
import random
import re
import sys

#
# Complete the 'pangrams' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def pangrams(s):
    upper_case_asci=64
    lower_case_asci=96
    result=1
    for i in range(1,27):
        uchar=chr(upper_case_asci+i)
        lchar=chr(lower_case_asci+i)
        l_check=re.search(lchar,s)
        u_check=re.search(uchar,s)
        if l_check:
            continue
        elif u_check:
            continue
        else:
            result=0
            break
    return result
#driver code
s=input()
x=pangrams(s)
if x ==1:
    print("pangrams")
else:
    print("not pangrams")        
    

