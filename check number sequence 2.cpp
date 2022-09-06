#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    int arr[n];
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    int i=0;
    bool check;
    while (i<n)
    {
        if (arr[i]>arr[i+1])
        {
             check=true;
        }
        else if (arr[i]<arr[i+1])
        {
             check=true;
        }
        else{
            check=false;
        }
        i++;
    }
    cout<<check;

}