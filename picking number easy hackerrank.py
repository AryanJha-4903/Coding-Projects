
def picking_number(numbers_list):
    temp=0
    for i in numbers_list:
        check=0
        for j in numbers_list:
            if i==j or int(i)-int(j)==1 :
                check=check+1
        if check>temp:
            temp=check
    return temp        
#driver code
n = int(input())
a = list(map(int,input().strip().split()))[:n]        
print(picking_number(a))