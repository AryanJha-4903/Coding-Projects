def non_divisible_subset(input_list, divisor):
    remainder_map = [0]*(divisor+1)
    remainder_map[-1]=0
    for i in input_list:
        remainder_map[i % divisor] += 1
    print(remainder_map)
    resultant=0
    if remainder_map[0]>=1:
                remainder_map[0]=1
    if divisor%2==0:
        run_range=divisor//2
    elif divisor%2!=0:
        run_range=(divisor//2)+1    
    for i in range(run_range):
        resultant += max(remainder_map[i], remainder_map[divisor-i])
    if divisor%2==0:
        return resultant+1
    elif divisor%2!=0:
        return resultant


# driver code
firstmultipleinput = input().rstrip().split()
n = int(firstmultipleinput[0])
k = int(firstmultipleinput[1])
s = list(map(int, input().rstrip().split()))
result = non_divisible_subset(s, k)
print(result)
