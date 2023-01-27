#include<bits/stdc++.h>
using namespace std;
/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*  temp1=l1;
        ListNode* temp2=l2;
        ListNode* new_head=new ListNode(-1);
        ListNode* last=new_head;
        int carry_over=0;
        int num1;
        int num2;
        while (true)
        {
            if (temp1==NULL)
            {
                num1=0;
            }
            else
            {
                num1=temp1->val;
                temp1=temp1->next;
            }
            if (temp2==NULL)
            {
                num2=0;
            }
            else
            {
                num2=temp2->val;
                temp2=temp2->next;
            }
            int result=carry_over+num1+num2;
            int insert_val=result%10;
            carry_over=(result-insert_val)/10;
            ListNode* my_val=new ListNode(insert_val);
            last->next=my_val;
            last=my_val;
            if (temp1==NULL&&temp2==NULL&&carry_over==0)
            {
                return new_head->next;
            }
        }
    }
};