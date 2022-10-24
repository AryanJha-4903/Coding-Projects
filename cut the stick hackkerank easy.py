from itertools import count
from os import remove
def cut_the_stick(input_array):
   while len(input_array)!=0:
       aux=[]
       for i in input_array:
           aux.append(i-min(input_array))    
       c = aux.count(0)
       for i in range(c):
           aux.remove(0)       
       print(len(input_array))         
       input_array=aux
       print(input_array)         
       
#driver code
size=int(input())
input_array= list(map(int, input().rstrip().split()))
cut_the_stick(input_array)
                                         
    
    
    