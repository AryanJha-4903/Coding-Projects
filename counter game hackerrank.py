import math
#function
def counter_game(num):
    moves=0
    while num>1:
        p = int(math.log(num, 2))
        nearest= int(pow(2, p))
        if num==nearest:
            num=num//2
            moves+=1
        if num>nearest:
            num=num-nearest
            moves+=1
    if moves%2==0:
        print("Richard")            
    else:
        print("Louise")
#driver code
for i in range(int(input())):
    num=int(input())        
    counter_game(num)
