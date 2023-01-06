#function 
def beautifull_pair(a,b):
    temp= len(b)
    for i in a:
        if i in b:
            b.remove(i)
    if len(b)==0:
        return temp-1
    else:
        return temp-len(b)+1
#driver code
n = int(input().strip())
A = list(map(int, input().rstrip().split()))
B = list(map(int, input().rstrip().split()))
result = beautifull_pair(A, B)
print(result)
    