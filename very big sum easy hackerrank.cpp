#include<iostream>
using namespace std;
void sum(int n,long long int *arr)
{
    long long int ans=0;
    for (int i = 0; i <=n-1; i++)
    {
        ans+=arr[i];
    }
    cout<<ans;
} 
int main()
{
    int n;
    cin>>n;
    long long int arr[n];
    for (int i = 0; i <=n-1; i++)
    {
        cin>>arr[i];
    }
    sum(n,arr);
}