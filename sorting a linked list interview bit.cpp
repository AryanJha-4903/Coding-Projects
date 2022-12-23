#include<bits/stdc++.h>
using namespace std;
/**
 * Definition for singly-linked list.*/
struct ListNode {
     int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
ListNode* Solution::sortList(ListNode* A) {
    ListNode* temp= A;
    vector<int>aux;
    while(temp!=NULL)
    {
        aux.push_back(temp->val);
        temp=temp->next;
    }
    sort(aux.begin(),aux.end());
    for(int i=0;i<aux.size();i++)
    {
        if(i==aux.size()-1)
        {
            cout<<aux[i]<<" ";
        }
        else{
            cout<<aux[i]<<" -> ";
        }
    }
    return NULL;
}