def amc_ipc(string_input):
    size_list=[]
    for i in range(1,len(string_input)+1):
        for j in range(i,len(string_input)+1):
            if i!=j:
                nos=0
                for x,y in zip(string_input[i-1],string_input[j-1]):
                    if x=='1'or y=="1":
                        nos+=1
                size_list.append(nos)                    
    max_value=max(size_list)
    count=size_list.count(max_value)
    print(max_value)
    print(count)
    return 
#driver code
first_multiple_input = input().rstrip().split()
n = int(first_multiple_input[0])
m = int(first_multiple_input[1])
topic = []
for _ in range(n):
    topic_item = input()
    topic.append(topic_item)
amc_ipc(topic)
