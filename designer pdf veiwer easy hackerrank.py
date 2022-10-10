#to set character height
def set_chsracter_height(size_list):
    hash_map={}
    asci_value=ord("a")
    for i in size_list:
        hash_map[chr(asci_value)]=i
        asci_value+=1
    return hash_map
#to calculate max area
def max_area(lists):
    temp=0
    for i in lists:
        if i>temp:
            i=temp
    return temp**2  
#highlighter function     
def highlighter_size(size_list,string):
        char_dict=set_chsracter_height(size_list)
        temp=0
        for i in string:
            x=char_dict[i]
            if x>temp:
             temp=x
        return temp*len(string) 
#driver code
h = list(map(int, input().rstrip().split()))
word = input()
result = highlighter_size(h, word)
print(result)        