import math

def find_integer(input_int):
     aux=input_int
     count=0
     while aux!=0:
        req_num=aux%10
        if  req_num!=0 and input_int % req_num==0 :
            count+=1
        aux=(aux-req_num)//10
     return count
 #driver code
test_case=int(input())
for i in range(0,test_case):
    input_num=int(input())
    print(find_integer(input_num))
#end
    
     
         
