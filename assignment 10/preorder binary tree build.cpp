#include<bits/stdc++.h>
using namespace std;
class root
{
    public:
    int data;
    root* left;
    root* right;
    root(int value)
    {
        data=value;
        left=nullptr;
        right=nullptr;
    }
};
int search(vector<int>inorder,int start,int end,int target)
{
    for (int i = start; i <=end; i++)
    {
        if (inorder[i]==target)
        {
            return i;
        }
    }
    return -1;
}
root* build_tree(vector<int>preorder,vector<int>inorder,int start,int end)
{
    static int index=0;
    int current=preorder[index];
    if (start>end)
    {
        return nullptr;
    }
    index++;
    root* head=new root(current);
    if (start==end)
    {
        return head;
    }
    int position=search(inorder,start,end,current);
    head->left=build_tree(preorder,inorder,start,position-1);
    head->right=build_tree(preorder,inorder,position+1,end);
    return head;
}
void print(root* head)
{
    if (head==nullptr)
    {
        return;
    }
    print(head->left);
    cout<<head->data<<" ";
    print(head->right);
}
int main()
{
    int size;
    cin>>size;
    vector<int>preorder;
    vector<int>inorder;
    for (int i = 0; i < size; i++)
    {
        int x;
        cin>>x;
        preorder.push_back(x);
    }
    for (int i = 0; i < size; i++)
    {
        int s;
        cin>>s;
        inorder.push_back(s);
    }
    root* head=build_tree(preorder,inorder,0,size-1);
    print(head);
}