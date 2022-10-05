import re
#function
def string_search(s):
    x=re.search("h.*a.*c.*k.*e.*r.*r.*a.*n.*k",s)
    if x:
        print("YES")
    else:
        print("NO")
#driver code
test=int(input())
for i in range(0 ,test):
    s=input()
    string_search(s)            