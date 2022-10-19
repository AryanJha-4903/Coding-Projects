#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int value;
    node* next;
    node(int input)
    {
        value=input;
        next=nullptr;
        return;
    }
};
void insert_at_end(node* &start,int input)
{
    node* new_node=new node(input);
    if (start==nullptr)
    {
        start=new_node;
        return;
    }
    node* temp=start;
    while (temp->next!=nullptr)
    {
        temp=temp->next;
    }
    temp->next=new_node;
}
vector<int> hash_map(vector<int>aux)
{
    sort(aux.begin(),aux.end());
    map<int, int> check_map;
    int temp= -1;
    int index=1;
    for (int i = 0; i <aux.size(); i++)
    {
        if (aux[i]!=temp)
        {
            check_map[index]=aux[i];
            temp=aux[i];
            index++;
        }
    }
    
     vector<int> result;
     for (int j =1;j<=index;j++)
     {
        int element=check_map[j];
        result.push_back(element);     
     }
     return result;
}
void display_linked_list(node* start)
{
    node* temp= start;
    while (temp->next!=nullptr)
    {
        cout<<temp->value<<" -> ";
        temp=temp->next;
    }
    cout<<"nullptr";
}
void remove_duplicate_form_linked_list(node* &start)
{
     node* temp=start;
     node* delete_node=start;
     node* tail=NULL;
     vector<int>aux;
     while (temp!=nullptr)
     {
        aux.push_back(temp->value);
        temp=temp->next;
     }
     node* start2=nullptr;
     vector<int>aux2=hash_map(aux);
     for (auto &&i : aux2)
     {
        insert_at_end(start2,i);
     }
     display_linked_list(start2);
}
int main()
{
    int test_case;
    cin>>test_case;
    while (test_case--)
    {
        int size;
        cin>>size;
        node* start=nullptr;
        for (int i = 1; i <=size; i++)
        {
            int element;
            cin>>element;
            insert_at_end(start,element);
        }
        remove_duplicate_form_linked_list(start);
    }
}
