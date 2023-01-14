class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
    unordered_set<ListNode*>check;
    ListNode* temp=headA;
    while (temp!=NULL)
    {
        check.insert(temp);
        temp=temp->next;
    }
       ListNode* temp2=headB;
       while (temp2!=NULL)
       {
        if(check.find(temp2)!=check.end())
        {
            return temp2;
        }
        temp2=temp2->next;
       }
       return NULL;
    }
};