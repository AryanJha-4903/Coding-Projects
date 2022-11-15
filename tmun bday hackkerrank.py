def taumbday(black,white,b_c,w_c,swap):
    if b_c==w_c and b_c==swap:
        return (black*b_c)+(white*w_c)
    elif b_c+swap<w_c:
        w_c=b_c+swap
    elif w_c+swap<b_c:
        b_c=w_c+swap    
    return (black*b_c)+(white*w_c)
t = int(input().strip())
for t_itr in range(t):
    first_multiple_input = input().rstrip().split()
    b = int(first_multiple_input[0])
    w = int(first_multiple_input[1])
    second_multiple_input = input().rstrip().split()
    bc = int(second_multiple_input[0])
    wc = int(second_multiple_input[1])
    z = int(second_multiple_input[2])
    print(taumbday(b, w, bc, wc, z))