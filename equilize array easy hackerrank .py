def equilize_array(input_list):
    input_set=set(input_list)
    aux={}
    for i in input_set:
        aux[i]=input_list.count(i)
    max_term=max(aux.values())
    return len(input_list)-max_term
#driver code
s=int(input())
input_list=list(map(int, input().rstrip().split()))
print(equilize_array(input_list))
    