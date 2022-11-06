
def jumping_on_cloud(clouds,jump_size):
   energy=100
   i=0
   while True:
       energy-=1
       pos=(i+jump_size)%len(clouds)
       i=pos
       if clouds[i]==1:
           energy-=2
       if i==0:
           return energy     
#driver code
nk = input().split()
n = int(nk[0])
k = int(nk[1])
c = list(map(int, input().rstrip().split()))
result = jumping_on_cloud(c, k)          
print(result)       
    
    