from csv import writer
from itertools import count
import math
def reverse_number(x):
    req_num=0
    while x!=0:
        req_num=req_num*10
        temp=x%10
        req_num+=temp
        x=(x-temp)//10
    return req_num
def beautiful_day(start,end,divisor):
    count=0
    for i in range(start,end+1):
        rev=reverse_number(i)
        if abs(i-rev)%divisor==0:
            count+=1
    return count
#driver code
line_input=input().rstrip().split()
start=int(line_input[0])
end=int(line_input[1])
divisor=int(line_input[2])
print(beautiful_day(start,end,divisor))

