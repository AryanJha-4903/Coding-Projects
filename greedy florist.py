#function
def greedy_florist(cost_list,boys):
    cost_list.sort(reverse=True)
    multiplier=1
    total_cost=0
    for i in range(len(cost_list)):
        total_cost+=cost_list[i]*multiplier
        if (i+1)%boys==0:
            multiplier+=1
    return total_cost        
#driver code
nk = input().split()
n = int(nk[0])
k = int(nk[1])
c = list(map(int, input().rstrip().split()))
minimumCost = greedy_florist(c, k)    
print(minimumCost)
