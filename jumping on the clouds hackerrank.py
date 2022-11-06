def cloud_jumping(clouds):
    i=0
    moves=0
    while i<len(clouds)-1:
        if i+2<len(clouds) and clouds[i+2]==0:
            i+=2
            moves+=1
        elif i+1<len(clouds) and clouds[i+1]==0:
            i+=1
            moves+=1    
    return moves                        
#driver code
size=int(input())
cloud=list(map(int, input().rstrip().split()))
print(cloud_jumping(cloud))