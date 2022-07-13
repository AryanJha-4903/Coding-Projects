#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        int x=pow(2,i-1);
        if(i==1)
        {
            cout<<i<<endl;
        }
        if(i==2)
        {
            cout<<i<<endl;
        }
        
        if (x%i==1)
        {
            cout<<i;
            cout<<"\n";
        }
    }
}