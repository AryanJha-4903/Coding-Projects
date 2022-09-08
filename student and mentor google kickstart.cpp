#include<iostream>
#include<cmath>
using namespace std;
void mentor(int n,int *arr)
{
    for (int i = 0; i <=n-1; i++)
    {
        int temp= -1;
        for (int j = 0; j <=n-1; j++)
        {
            if (arr[j]>temp&&arr[j]<=2*arr[i]&&i!=j)
            {
                temp=arr[j];
            }
        }
        cout<<temp<<' ';
    }
}
int main()
{
    int test;
    cin>> test;
    for (int i = 1; i <=test; i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int j = 0; j <=n-1; j++)
        {
            cin>>arr[j];
        }
        cout<<"Case"<<" #"<<i<<" : ";
        mentor(n,arr);
        cout<<endl;
    }
}
