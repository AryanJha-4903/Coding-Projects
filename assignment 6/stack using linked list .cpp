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
class stacks
{
    node* head;
    int size;
    public:
    stack()
    {
        head=NULL;
        size=-1;
        return 0;
    }
    void push(int value)
    {
        node* new_node=new node(value);
        node* temp=head;
        head=new_node;
        head->next_key=temp;
        size++;
    }
    void pop()
    {
        node* temp=head;
        head=head->next_key;
        delete temp;
        size--;
    }
    void top()
    {
        cout<<head->value<<endl;
    }
    void length()
    {
        cout<<size+1<<endl;
    }
    void display_stack()
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
int main ()
{
    stacks s;
    s.push(3);
    s.push(4);
    s.push(6);
    s.push(0);
    s.display_stack();
    cout<<endl;
    s.pop();
    s.display_stack();
    cout<<endl;
    s.top();
    s.length();
}