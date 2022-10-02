import math
from operator import truediv
import os
import random
import re
import sys
#to check leap year
def leapyear(year):
    #for gregonian calender
    if year>1918:
        if   year%4==0 and year%100!=0:
          return True
        elif year%400==0:
          return True
        else:
          return False
    #for julinan calender
    if year<1918:
         if  year%4==0:
            return True
         else:
            return False
#to get the date            
def programmersday(year):
    if year<1918 or year>1918:
        if leapyear(year) is True:
            print("12.09.{}".format(year))
        if leapyear(year) is False:
            print("13.09.{}".format(year))
    if year==1918:
        print("26.09.1918") 
#driver code                   
year=int(input())
programmersday(year)
  
