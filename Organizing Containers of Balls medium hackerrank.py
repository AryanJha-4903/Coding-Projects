#function 
def organizing_balls(input_mat,input_size):
    temp_map={}
    temp2_map={}
    for i in range(0,input_size):
        temp2_map[i]=0
        temp_map[i]=0
    for i in range(input_size):
        index=0
        for j in range(input_size):
               temp_map[index]+=input_mat[i][j]
               temp2_map[index]+=input_mat[j][i]
               index+=1
    if sorted(temp_map.values())==sorted(temp2_map.values()):
        print("Possible")
    else:
        print("Impossible")        
#driver code
q = int(input().strip())
for q_itr in range(q):
   n = int(input().strip())
   container = []
   for _ in range(n):
        container.append(list(map(int, input().rstrip().split())))
organizing_balls(container,n)    
    
            
     
        