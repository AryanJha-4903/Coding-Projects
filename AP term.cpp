#include<iostream>
using namespace std;
int main()
{
    int x,term,i=1,j=1;
    cin>>x;
   while(i<=x)
    {
        term=3*j+2;
        if (term%4!=0)
        {
            cout<<term<<" ";
        i++;
        }
        j++;
    }
    return 0;
}