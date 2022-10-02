import math
#main functon
def prisoner(n, t, s):
    x=t%n+s-1
    if x==0:
        return n
    else:
        return x
#driver code
for i in range (int(input())):
    n, t, s = [int(x) for x in input().split()]
    print(prisoner(n, t, s))
#end
