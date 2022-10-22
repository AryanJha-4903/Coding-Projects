import math

def library_fine(dr,mr,yr,di,mi,yi):
    if yr>yi:
        fine=10000
        return fine
    if yr<yi:
        fine=0
        return fine
    if mr<mi:
        fine=0
        return fine
    elif mr>mi:
        fine=500*(mr-mi)
        return fine
    elif dr>di:
        fine=15*(dr-di)
        return fine
    else:
        fine=0
        return fine
    
    
first_multiple_input = input().rstrip().split()

d1 = int(first_multiple_input[0])

m1 = int(first_multiple_input[1])

y1 = int(first_multiple_input[2])

second_multiple_input = input().rstrip().split()

d2 = int(second_multiple_input[0])

m2 = int(second_multiple_input[1])

y2 = int(second_multiple_input[2])

result = library_fine(d1, m1, y1, d2, m2, y2)

print(str(result) + '\n')    
        
    