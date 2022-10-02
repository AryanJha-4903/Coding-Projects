import math
#main functon
def prisoner(n, t, s):
    x=t%n+s-1
    return x
#driver code
for i in range (int(input())):
    n, t, s = [int(x) for x in input().split()]
    print(prisoner(n, t, s))
#end1