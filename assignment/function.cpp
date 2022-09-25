#include<iostream>
using namespace std;
int maxnum(int arr[4])
{
    int temp=0;
    for (int i = 0; i <=3; i++)
    {
        if (arr[i]>temp)
        {
            temp=arr[i];
        }
    }
    return temp;
}
int main()
{
    int arr[4];
    for (int i = 0; i <=3; i++)
    {
        cin>>arr[i];
    }
    cout<<maxnum(arr);
}