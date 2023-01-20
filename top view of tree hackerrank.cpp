#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
        Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }
        vector<int>top_view(Node* root)
        {
            vector<int>result;
            if (root==NULL)
            {
                return result;
            }
           map<int, Node*>check;
           queue<pair<int, Node*>>temp;
           temp.push(make_pair(0,root));
           while (!temp.empty())
           {
            auto element=temp.front();
            int line=element.first;
            Node* temp_node=element.second;
            temp.pop();
            if (check.find(line)==check.end())
            {
                check[line]=temp_node;
            }
            if (temp_node->left!=NULL)
            {
                temp.push(make_pair(line-1,temp_node->left));
            }
            if (temp_node->right!=NULL)
            {
                temp.push(make_pair(line+1,temp_node->right));
            }
           }
           for (auto &&i : check)
           {
            result.push_back(i.second->data);
           }
           return result;
        }
}; //End of Solution
int main() {
  
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
    vector<int>ans=myTree.top_view(root);
    for (auto &&i : ans)
    {
        cout<<i<<" ";
    }
    return 0;
}


