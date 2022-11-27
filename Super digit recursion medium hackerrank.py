def superdigit(n,k):
    def sub_part(n):
        total=0
        for i in n:
           total+=int(i)
        return total    
    n=str(sub_part(n)*k)
    if int(n)<10:
        return n
    return superdigit(n,1) 
#driver code
first_multiple_input = input().rstrip().split()
n = first_multiple_input[0]
k = int(first_multiple_input[1])
result = superdigit(n,k)
print(result)
