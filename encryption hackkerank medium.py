#function
import math
def encryption(input_str):
    column=math.ceil(math.sqrt(len(input_str)))
    row=math.floor(math.sqrt(len(input_str)))
    while row*column<len(input_str):
        row+=1
    temp_list=[]
    index=0
    for _ in range(row):
        aux_list=[]
        for _ in range(column):
            if index<=len(input_str)-1:
               aux_list.append(input_str[index])
               index+=1
            else:
                aux_list.append("*")
        temp_list.append(aux_list)
    print(temp_list)
    result_str=""
    for m in range(0,column):
        for n in range(0,row):
            if temp_list[n][m]!="*":
                result_str+=temp_list[n][m]
        result_str+=" "
    return result_str
#driver code
s = input()
result = encryption(s)  
print(result)      
            