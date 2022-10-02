import math
#main functon
def prisoner(n, t, s):
    x=s+t-1
    x=x%n
    if x==0:
        return n
    return x
#driver code
for i in range (int(input())):
    n, t, s = [int(x) for x in input().split()]
    print(prisoner(n, t, s))
#end1
