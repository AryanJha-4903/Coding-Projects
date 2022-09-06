#include<iostream>
using namespace std; 
int main()
{
    int n,temp;
    int c;
    cin>>n;
    cin>>c;
    if (c==1)
    {
        temp=0;
        for (int i = 1; i <=n; i++)
        {
            temp=temp+i;
        }  
        cout<<temp;
    }
    if (c==2)
    {
        temp=1;
        for (int i = 1; i <=n; i++)
        {
            temp=temp*i;
        }
        cout<<temp;
    }
    else
    {
        cout<<-1;
    }
}