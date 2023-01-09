#funtion
def orders(order_list):
    hash_map={}
    for i in range(1,len(order_list)+1):
        hash_map[i]=order_list[i-1][0]+order_list[i-1][1]
    sorted_map=sorted(hash_map.items(),key=lambda x:x[1]) 
    answer_list=[]
    for i in sorted_map:
        answer_list.append(i[0])
    return answer_list   
#driver code
n = int(input().strip())
orderlist = []
for _ in range(n):
    orderlist.append(list(map(int, input().rstrip().split())))
result=orders(orderlist)
print(result)
