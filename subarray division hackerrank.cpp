#include<iostream>
using namespace std;
int array_sumer(int *arr,int start,int end)
{
    int temp=0;
    for (int i = start; i <=end; i++)
    {
        temp+=arr[i];
    }
    return temp;
}
int chocolate_divider(int n,int *arr,int month,int days)
{
    int count=0;
    int temp;
    for (int i = 0; i <=n-1; i++)
    {
        temp=array_sumer(arr,i,i+month-1);
        if (temp==days)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i <=n-1; i++)
    {
        scanf("%d",&arr[i]);
    }
    int days;
    int month;
    scanf("%d %d",&days,&month);
    cout<<chocolate_divider(n,arr,month,days);
    return 0;
}
