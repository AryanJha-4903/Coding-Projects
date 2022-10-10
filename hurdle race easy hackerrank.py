
def hurdle_race(jumps,potions):
    temp=0
    for i in jumps:
        if i>temp:
            temp=i
    if temp-potions<0:
        return 0
    else:
        return temp-potions
#driver code
first_multiple_input = input().rstrip().split()
n = int(first_multiple_input[0])
k = int(first_multiple_input[1])
height = list(map(int, input().rstrip().split()))
result = hurdle_race(height,k)
print(result)
        