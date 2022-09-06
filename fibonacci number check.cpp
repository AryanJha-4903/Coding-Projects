#include<iostream>
using namespace std;
int main()
{
    int n,arr[n],sum=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<sum;
}