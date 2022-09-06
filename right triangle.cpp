#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        int x=i;
        int y=2*i-2;
        for (int j = n; j >= i+1; j--)
        {
            cout<<" ";   
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<x;
            x++;
        }
        for (int j = 1; j <= i-1; j++)
        {
            cout<<y;
            y--;
           
        }
        cout<<"\n";
    }
}
