
import math

def find_square(lower_bound,upper_bound):
    return math.floor(math.sqrt(upper_bound))-math.ceil(math.sqrt(lower_bound))+1
#driver code
test_case=int(input())
for i in range(0,test_case):
    upper_bound=int(input())
    lower_bound=int(input())
    print(find_square(upper_bound,lower_bound))
#end
            
        