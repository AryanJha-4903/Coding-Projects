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
        Node* insert(Node* root, int data) 
        {
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
        vector<int>level_order(Node* root)
        {
            vector<int>result;
            queue<Node*>temp;
            temp.push(root);
            while (!temp.empty())
            {
                auto test=temp.front();
                temp.pop();
                result.push_back(test->data);
                if (test->left!=NULL)
                {
                    temp.push(test->left);
                }
                if (test->right!=NULL)
                {
                    temp.push(test->right);
                }
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
    vector<int>result=myTree.level_order(root);
    for (auto &&i : result)
    {
        cout<<i<<" ";
    }
    return 0;
}
