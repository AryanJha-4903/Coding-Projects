<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if (n==1)
    {
        cout<<"*";
    }
    if (n%2!=0&&n!=1)
    {
        int U_split=n/2+0.5;
        int L_split=n/2-0.5;
        for (int  i = 1; i <= U_split+1; i++)
        {
            for (int j = U_split; j >=i ; j--)
            {
                cout<<" ";
            }
            for (int j = 1; j <=i-1; j++)
            {
                cout<<"|";
            }
            for (int j = 1; j <=i; j++)
            {
                cout<<"|";
            }
            cout<<"\n";
        }
        for (int i = 1; i <= L_split+1; i++)
        {
           for (int j = 1; j <=i; j++)
            {
                cout<<" ";
            }
            for (int j = L_split; j >=i-1 ; j--)
            {
                cout<<"|";
            }
            for (int j = L_split; j >=i ; j--)
            {
                cout<<"|";
            }
            cout<<"\n";
        }
    }
=======
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if (n==1)
    {
        cout<<"*";
    }
    if (n%2!=0&&n!=1)
    {
        int U_split=n/2+0.5;
        int L_split=n/2-0.5;
        for (int  i = 1; i <= U_split+1; i++)
        {
            for (int j = U_split; j >=i ; j--)
            {
                cout<<" ";
            }
            for (int j = 1; j <=i-1; j++)
            {
                cout<<"*";
            }
            for (int j = 1; j <=i; j++)
            {
                cout<<"*";
            }
            cout<<"\n";
        }
        for (int i = 1; i <= L_split+1; i++)
        {
           for (int j = 1; j <=i; j++)
            {
                cout<<" ";
            }
            for (int j = L_split; j >=i-1 ; j--)
            {
                cout<<"*";
            }
            for (int j = L_split; j >=i ; j--)
            {
                cout<<"*";
            }
            cout<<"\n";
        }
    }
>>>>>>> 2d2a7f5bdd3e8483c118c8fbdd6b80340b52f307
}