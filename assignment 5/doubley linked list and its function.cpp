#include<bits/stdc++.h>
using namespace std;
class double_node
{
public:
    int value;
    double_node* next;
    double_node* previous;
double_node(int input)
{
    value=input;
    next=NULL;
    previous=NULL;
}
};
void insert_a_double_node_at_end(double_node* &start,int value)
{
    double_node* new_node=new double_node(value);
    if (start==NULL)
    {
        start=new_node;
        return;
    }
    double_node* temp=start;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    new_node->previous=temp;
    temp->next=new_node;
}
void insert_a_element_in_a_sorted_linked_list(double_node* &start,int input)
{
    double_node* new_node=new double_node(input);
    double_node* temp= start;
    if (start->value>input)
    {
        start=new_node;
        new_node->previous=NULL;
        new_node->next=temp;
        return;
    }
    double_node* temptail;
    while (temp->next!=NULL)
    {
        if (temp->value<input)
        {
            temptail=temp;
            temp=temp->next;
        }
        else
        {
            break;
        }
    }
    if (temp->next==NULL)
    {
        insert_a_double_node_at_end(start,input);
        return;
    }
    temptail->next=new_node;
    new_node->previous=temptail;
    new_node->next=temp;
    temp->previous=new_node;
}
void display_doubley_linked_list(double_node* start)
{
    double_node* temp=start;
    while (temp!=NULL)
    {
        cout<<temp->value<<" <-> ";
        temp=temp->next;
    }
    cout<<"NULL";
}
void reverse_a_doublely_linked_list(double_node* start)
{
    double_node* temp_end=start;
    while (temp_end->next!=NULL)
    {
        temp_end=temp_end->next;
    }
    cout<<"NULL";
    while (temp_end->previous!=NULL)
    {
        temp_end=temp_end->previous;
        cout<<" <-> "<<temp_end->value;
    }
}
int main()
{
    int size;
    cin>>size;
    double_node* start=NULL;
    vector<int>input;
    while (size--)
    {
        int element;
        cin>>element;
        input.push_back(element);
    }
    sort(input.begin(), input.end());
    for (auto &&i : input)
    {
        insert_a_double_node_at_end(start,i);
    }
    input.clear();
    display_doubley_linked_list(start);
    int insert_value;
    cin>>insert_value;
    insert_a_element_in_a_sorted_linked_list(start,insert_value);
    display_doubley_linked_list(start);
    cout<<endl;
    reverse_a_doublely_linked_list(start);
}
