def a_and_d_config(input_string,check_string):
    starter=-1
    if len(input_string)>=len(check_string):
        deleting_moves=len(input_string)-len(check_string)
        appending_moves=0
        for i in range(0,len(check_string)):
            if input_string[i]!=check_string[i]:
                starter=i
                break    
        lenght_of_correction=len(check_string[starter:])
        deleting_moves=deleting_moves+lenght_of_correction
        appending_moves=appending_moves+lenght_of_correction
        return deleting_moves+appending_moves
    elif len(input_string)<len(check_string):
        deleting_moves=0
        appending_moves=len(check_string)-len(input_string)
        for i in range(0,len(input_string)):
            if input_string[i]!=check_string[i]:
                starter=i
                break
             
        lenght_of_correction=len(input_string[starter:])
        deleting_moves=deleting_moves+lenght_of_correction
        appending_moves=appending_moves+lenght_of_correction
        return deleting_moves+appending_moves
def a_and_d(input_string,check_string,moves):
    required_moves=a_and_d_config(input_string,check_string)
    if required_moves<=moves:
        print("Yes")
    else:
        print("No")
    return            
#driver code
input_stirng=input()
check_stirng=input()
moves=int(input())
a_and_d(input_stirng,check_stirng,moves)
    