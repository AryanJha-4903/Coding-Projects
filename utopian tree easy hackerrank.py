def utopian_tree(cycle):
    tree_size=0
    for i in range(0,cycle+1):
        if i%2==0:
            tree_size+=1
        elif i%2==1:
            tree_size*=2
    print(tree_size)
test=int(input())
for i in range(0,test):
    utopian_tree(int(input()))
           