#include<iostream>
#include<cmath>
using namespace std;
int color_checker(int n)
{
    int result=0;
    int term=1;
    for (int i = 1; i <=n; i++)
    {
        if (i==1+(term-1)*5)
        {
            result++;
            term++;
        }
    }
    return result;
}
int main()
{
    int test;
    cin>>test;
    for (int i = 1; i <=test; i++)
    {
        int n;
        cin>>n;
        int r=color_checker(n);
        cout<<"Case"<<" #"<<i<<": "<<r<<endl;
    }
    return 0;
}