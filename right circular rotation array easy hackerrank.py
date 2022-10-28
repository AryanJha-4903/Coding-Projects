def circular_array_rotation(input_array,rotation):
     for i in range(rotation):
         end=input_array[-1]
         input_array.pop()
         input_array.insert(0,end)
     return input_array
#driver code
task=input().rstrip().split()
size=int(task[0])
rotation=int(task[1])
queries=int(task[2])
input_list=list(map(int, input().rstrip().split()))
input_list2=circular_array_rotation(input_list,rotation)
for i in range(queries):
    x=int(input())
    print(input_list2[x])
    
             
             