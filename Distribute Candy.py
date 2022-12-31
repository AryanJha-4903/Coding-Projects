#function
def candy(input_list):
    aux=[1]*len(input_list)
    for i in range(1,len(input_list)):
        if input_list[i]>input_list[i-1]:
            aux[i]=aux[i-1]+1  
    for i in range(len(input_list)-2,-1,-1):
        if input_list[i]>input_list[i+1]:
            aux[i]=max(aux[i],aux[i+1]+1)     
    total=0
    for i in aux:
        total+=i
    return total
    #driver code
input_list=list(map(int,input().rstrip().split()))
print(candy(input_list))
