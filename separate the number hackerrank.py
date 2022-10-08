from operator import neg
import re

#function
def number_beauty(num_string):
   if  len(num_string)==1:
        print("NO")
        return
   temp_string=""
   negative_result=0
   for i in range(0,len(num_string)//2):
       temp_string=temp_string+num_string[i]
       matching_string=temp_string
       intger_value=int(temp_string)
       while len(matching_string)<len(num_string):
           intger_value=intger_value+1
           matching_string=matching_string+str(intger_value)   
       if matching_string==num_string:
            print("Yes",temp_string)
            negative_result=1
            return   
   if negative_result==0:
        print("No")
        return
#driver code
test=int(input())
for i in  range (0, test):
    number_beauty(input())
    