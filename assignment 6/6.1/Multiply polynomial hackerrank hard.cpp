#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int value;
    int power;
    node* next_key;
    node(int input)
    {
        value=input;
        power=0;
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
    int ex=1;
    while (temp->next_key!=NULL)
    {
       ex++;
       temp=temp->next_key;
    }
    temp->next_key=new_node;
    new_node->power=ex;
}
void multiply_polynomial(node*head1,node*head2,int p1,int p2)
{
    int res_power=p1+p2;
    vector<int>result;
    for (int i = 0; i <=res_power; i++)
    {
        result.push_back(0);
    }
    node* temp1=head1;
    while (temp1!=NULL)
    {
        node* temp2=head2;
        while (temp2!=NULL)
        {
            int n=temp1->value*temp2->value;
            int i=temp1->power+temp2->power;
            result[i]=result[i]+n;
            temp2=temp2->next_key;
        }
        temp1=temp1->next_key;
    }
    for (int i = 0; i <=res_power; i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<0;
    cout<<endl;
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,m;
        cin>>n>>m;
        node*head1=NULL;
        for (int i = 0; i <n ; i++)
        {
            int x;
            cin>>x;
            insert_values_at_last(head1,x);

        }
        node*head2=NULL;
        for (int i = 0; i < m; i++)
        {
            int y;
            cin>>y;
            insert_values_at_last(head2,y);
        }
        multiply_polynomial(head1,head2,n-1,m-1);
    }
}
