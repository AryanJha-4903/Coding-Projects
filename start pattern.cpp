<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j <n-i; j++)
        {
           cout<<" ";
        }
        for (int j = 0; j <=i-1; j++)
        {
            cout<<"*";
        }
        for (int j = 0; j <=i; j++)
        {
            cout<<"*";
        }
        cout<<"\n"; 
    }
=======
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j <n-i; j++)
        {
           cout<<" ";
        }
        for (int j = 0; j <=i-1; j++)
        {
            cout<<"*";
        }
        for (int j = 0; j <=i; j++)
        {
            cout<<"*";
        }
        cout<<"\n"; 
    }
>>>>>>> 2d2a7f5bdd3e8483c118c8fbdd6b80340b52f307
}