#function
def maximizing_xor(a ,b):
    max_num=0
    for i in range(a,b+1):
        for j in range(a,b+1):
            result=i^j
            if max_num<result:
                max_num=result
    return max_num
#driver code
a=int(input())            
b=int(input())
print(maximizing_xor(a,b))