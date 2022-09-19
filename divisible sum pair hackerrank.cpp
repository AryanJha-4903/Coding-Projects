#include<iostream>
using namespace std;
int divide_sumer(int n,int k,int *arr)
{
    int count=0,i,j;
    for ( i = 0; i <=n-1; i++)
    {
        for ( j = 0; j <=n-1; i++)
        {
            int temp=(arr[i]+arr[j]);
            if (temp%k==0&&i!=j)
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int n;
    int k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for (int i = 0; i <=n-1; i++)
    {
        scanf("%d",&arr[i]);
    }
    cout<<divide_sumer(n,k,arr);
    return 0;
}