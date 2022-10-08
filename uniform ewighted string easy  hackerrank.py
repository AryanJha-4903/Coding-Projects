from random import uniform
import re
from sys import stdin
def weight_of_stirng(s):
    value_array={}
    w=0
    for i in range(0,len(s)):
        if i == 0 or s[i] != s[i-1]:
            w = ord(s[i]) - 96
        else:
            w = w + ord(s[i]) - 96 
        value_array[w]=1
    print(value_array)                 
    return value_array    
#driver code
string=input()
queries=int(input())
resultant_array=weight_of_stirng(string)
for i in range(0,queries):
    value=int(input())
    if value in resultant_array:
        print("Yes")
    else:
        print("No")
            