
def sequence_equation(input_array):
    output_list=[]
    for i in range(1,len(input_array)+1):
        p1=input_array.index(i)
        p2=input_array.index(p1+1)
        output_list.append(p2+1)
    return output_list
#driver code
size=int(input())
input_array=list(map(int, input().rstrip().split()))
output_list=sequence_equation(input_array)
for i in output_list:
    print(i)
    