#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int g=n;
    for (int i = 1; i <= n; i++)
    {
        int x=1;
        int y=g;
        for (int j = n; j >= i; j--)
        {
           cout<<x;
            x++;  
        }
        for (int j = 1; j <= i-1; j++)
        {
            cout<<"*";
        }
        for (int j = 1; j <= i-1; j++)
        {
            cout<<"*"; 
        }
         for (int j = n; j >= i; j--)
        {
           cout<<y;
            y--;   
        }
        g--;
        cout<<"\n";
    }
}