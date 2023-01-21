#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int value)
    {
        data=value;
        left=NULL;
        right=NULL;
    }
};
node* insert(node* root,int value)
{
    if (root==NULL)
    {
        return new node(value);
    }
    if (value<root->data)
    {
        root->left=insert(root->left,value);
    }
    else
    {
        root->right=insert(root->right,value);
    }
    return root;
}
void preorder(node* root)
{
    if (root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    int t;
    cin>>t;
    int data;
    node* root=NULL; 
    while(t-- > 0) {
        std::cin >> data;
        root = insert(root, data);
    }
    preorder(root);
}