#include<iostream>
using namespace std;
void ratio(int l,int *arr)
{
    float p=0;
    float n=0;
    float z=0;
    for (int i = 0; i <=l-1; i++)
    {
        if (arr[i]>0)
        {
            p++;
        }
         if (arr[i]<0)
        {
            n++;
        }
         if (arr[i]==0)
        {
            z++;
        }
    }
    printf("%.6f\n",p/l);
    printf("%.6f\n",n/l);
    printf("%.6f\n",z/l);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i <=n-1; i++)
    {
        cin>>arr[i];
    }
    ratio(n,arr);
}
