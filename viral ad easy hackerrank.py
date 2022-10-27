
from math import floor


def viral_ad(no_of_days):
    n=5
    likes=0
    cum_likes=0
    for i in range(no_of_days):
        likes=floor(n//2)
        n=likes*3
        cum_likes+=likes
    return cum_likes
#driver code
print(viral_ad(int(input())))    
