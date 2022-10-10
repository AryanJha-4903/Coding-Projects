#operation to remove duplicates
def remove_duplicates(queries):
    queries.sort(reverse=True)
    hash_map={}
    rank=1
    temp=-1
    for i in queries:
        if i!=temp:
            hash_map[rank]=i
            rank=rank+1
            temp=i
    hash_map[rank]=0        
    return hash_map
def ranking(leaderboard,players):
    ranks=remove_duplicates(leaderboard)
    for i in players:
        start=1
        end=len(ranks)
        if i >=ranks[1]:
            print(1)
            continue
        while start<=end:
            mid=(start+end)//2
            if i>=ranks[mid]and i<ranks[mid-1]:
                print(mid)
                break
            if i<ranks[mid] and i>=ranks[mid+1]:
                print(mid+1)
                break
            elif i>ranks[mid]:
                end=mid-1
            elif i<ranks[mid]:
                start=mid+1
    return                     
#driver code
n = int(input())
a = list(map(int,input().strip().split()))[:n]
x = int(input())
q = list(map(int,input().strip().split()))[:x]
ranking(a,q)
