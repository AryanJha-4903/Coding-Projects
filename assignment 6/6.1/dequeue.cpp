#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int value;
    node* next_key;
    node* prev_key;
    node(int input)
    {
        value=input;
        next_key=NULL;
        prev_key=NULL;
        return;
    }
};
class DeQueues
{
    node* head;
    node* tail;
    public:
    DeQueues()
    {
        head=NULL;
        tail=NULL;
    }
    void push_back(int value)
    {
        node* new_node=new node(value);
        if(head==NULL){
            head=new_node;
            tail=new_node;
            return;
        }
        tail->next_key=new_node;
        new_node->prev_key=tail;
        tail=new_node;
    }
    void push_front(int value)
    {
        node* new_node=new node(value);
        if(head==NULL){
            head=new_node;
            tail=new_node;
            return;
        }
        head->prev_key=new_node;
        new_node->next_key=head;
        head=new_node;
    }
    void pop_front()
    {
        node* temp=head;
        head=head->next_key;
        head->prev_key=NULL;
        delete temp;
    }
    void pop_back()
    {
        node* temp=tail;
        tail=tail->prev_key;
        tail->next_key=NULL;
        delete temp;
    }
    void display_queue()
    {
        node* temp=head;
        while (temp!=NULL)
       {
          cout<<temp->value<<"->";
          temp= temp->next_key;
       }
       cout<<"NULL";
    }
};
int main()
{
    DeQueues s;
    s.push_front(0);
    s.push_front(1);
    s.push_front(2);
    s.push_back(-1);
    s.display_queue();
}