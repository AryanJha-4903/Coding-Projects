#function 
def beast(length):
    if length<5:
        if length==3:
            return 555
        else:
            return -1
    if length == 5:
        return 33333    
    if length==10:
        return 3333333333
    if length==13:
        return 5553333333333
    if length%3==0:
        output_str="5"*length
        return int(output_str)
    if length>5:
        t_ln=5
        length-=5
        while length%3!=0 :
            length-=5
            t_ln+=5
            if length<5:
                return -1
        output_str=("5"*length)+("3"*t_ln)
    return int(output_str)
#driver code
test=int(input())
for i in range(test):
    x=int(input())
    print(beast(x))
    
    