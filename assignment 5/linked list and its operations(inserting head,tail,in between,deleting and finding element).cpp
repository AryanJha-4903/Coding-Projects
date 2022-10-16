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
void insert_values_at_last(node* &start,int input)
{
    node* new_node=new node(input);
    if (start==NULL)
    {
        start=new_node;
        return;
    }
    node* temp=start;
    while (temp->next_key!=NULL)
    {
       temp=temp->next_key;
    }
    temp->next_key=new_node;
}
void insert_values_on_head(node* &start,int input)
{
    node* new_node=new node(input);
    new_node->next_key=start;
    start=new_node;
}
void insert_data_at_specific_position(node* &start,int position,int value)
{
    node*new_node=new node(value);
    node* temp_head=start;
    node* temp_tail;
    for (int i = 1; i <=position-1; i++)
    {
        temp_tail=temp_head;
        temp_head=temp_head->next_key;
    }
    temp_tail->next_key=new_node;
    new_node->next_key=temp_head;
}
void delete_a_node(node* &start,int input)
{
    node* temp=start;
    node* temp_tail;
    while (temp->value!=input)
    {
        temp_tail=temp;
        temp=temp->next_key;
    }
    node* deletenode=temp;
    temp_tail->next_key=temp->next_key;
    delete deletenode;
}
void find_the_elenent_on_a_specific_position_form_last(node* start,int position,int size)
{
    int finding_pos=size-position;
    node* temp=start;
    for (int i = 1; i <=finding_pos; i++)
    {
        temp=temp->next_key;
    }
    cout<<temp->value;
}
void display_the_linked_list(node* start)
{
    node* temp=start;
    while (temp!=NULL)
    {
        cout<<temp->value<<"->";
        temp= temp->next_key;
    }
    cout<<"NULL";
}
int main()
{
    int size;
    cin>>size;
    node* start=NULL;
    for (int i=1;i<=size;i++)
    {
        int element;
        cin>>element;
        insert_values_at_last(start,element);
    }
    display_the_linked_list(start);
    int update;
    cin>>update;
    insert_values_on_head(start,update);
    display_the_linked_list(start);
    int position;
    cin>>position;
    int sec_update;
    cin>>sec_update;
    insert_data_at_specific_position(start,position,sec_update);
    display_the_linked_list(start);
    int input;
    cin>>input;
    delete_a_node(start,input);
    display_the_linked_list(start);
    int pos;
    cin>>pos;
    find_the_elenent_on_a_specific_position_form_last(start,pos,size);
}