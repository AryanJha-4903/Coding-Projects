#function
def max_min(input_list,arr_size):
    input_list.sort()
    #size_list=[]
    result=max(input_list)
    i=0
    j=arr_size
    while j in range(len(input_list)+1):
        #new_list=input_list[i:j]
        #size_list.append(max(new_list)-min(new_list))
        temp=input_list[j-1]-input_list[i]
        if temp<result:
            result=temp
        i+=1
        j+=1
    return result    
#driver code
n = int(input().strip())
k = int(input().strip())
arr = []
for _ in range(n):
    arr_item = int(input().strip())
    arr.append(arr_item)
print(max_min(arr,k))
