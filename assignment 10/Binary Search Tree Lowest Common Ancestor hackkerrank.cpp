#include<bits/stdc++.h>
using namespace std;
class node{
    public:
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
    if (value<=root->data)
    {
        root->left=insert(root->left,value);
    }
    else
    {
        root->right=insert(root->right,value);
    }
    return root;
}
int lca_finder(node* root,int v1,int v2)
{
    unordered_set<node*>p1;
    unordered_set<node*>p2;
    node* temp_left=root;
    while (true)
    {
        if (temp_left->data==v1)
        {
            p1.insert(temp_left);
            break;
        }
        if (temp_left==NULL)
        {
            return -1;
        }
        if (v1<temp_left->data)
        {
            p1.insert(temp_left);
            temp_left=temp_left->left;
        }
        else if (v1>temp_left->data)
        {
            p1.insert(temp_left);
            temp_left=temp_left->right;
        }
    }
    node* temp_right=root;
    while (true)
    {
        if (temp_right->data==v2)
        {
            p2.insert(temp_right);
            break;
        }
        if (temp_right==NULL)
        {
            return -1;
        }
        if (v2<temp_right->data)
        {
            p2.insert(temp_right);
            temp_right=temp_right->left;
        }
        else if (v2>temp_right->data)
        {
            p2.insert(temp_right);
            temp_right=temp_right->right;
        }
    }
    vector<int>check;
    for (auto &&i : p1)
    {
        if(p2.find(i)!=p2.end())
        {
            check.push_back(i->data);
        }
    }
    if (root->data>v1&&root->data>v2)
    {
        return *min_element(check.begin(),check.end());
    }
    
    return *max_element(check.begin(),check.end());
}
int main()
{
    int size;
    cin>>size;
    node* root=NULL;
    while (size--)
    {
        int x;
        cin>>x;
        root=insert(root,x);
    }
    int v1,v2;
    cin>>v1>>v2;
    cout<<lca_finder(root,v1,v2);
}