#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int value;
    node* next_key;
    node(int input)
    {
        value=input;
        next_key=NULL;
        return;
    }
};
class Queues
{
    node* head;
    node* tail;
    public:
    Queues()
    {
        head=NULL;
        tail=NULL;
    }
    void push(int value)
    {
        node* new_node=new node(value);
        if(head==NULL){
            head=new_node;
            tail=new_node;
            return;
        }
        tail->next_key=new_node;
        tail=new_node;
    }
    void pop()
    {
        node* temp=head;
        head=head->next_key;
        delete temp;
    }
    void peek()
    {
        cout<<head->value<<endl;
    }
    void display_queue()
    {
        node* temp=head;
        while (temp->next_key!=NULL)
       {
          cout<<temp->value<<"->";
          temp= temp->next_key;
       }
       cout<<"NULL";
    }
};
int main()
{
    Queues s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.display_queue();
    cout<<endl;
    s.peek();
    s.pop();
    s.display_queue();
    cout<<endl;
    s.peek();
}