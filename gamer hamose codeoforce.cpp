#include<iostream>
#include<math.h>
using namespace std;
void bubblesort(int *arr,int n)
{
    for (int i = 0; i <n-1; i++)
    {
        for (int j = 0; j <=n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int valorant(int w,int *arr, int h)
{
    int moves=0;
    bubblesort(arr,w);
    for (int i = w-1; i >=0; i--)
    {
        if (h<=0)
        {
            break;
        }
        h=h-arr[i];
        moves++;
    }
    return moves;
}
int main()
{
    int test;
    cin>>test;
    while (test--)
    {
        int w, h;
        cin>>w;
        cin>>h;
        int arr[w];
        for (int i = 0; i <=w-1; i++)
        {
            cin>>arr[i];
        }
        int moves=valorant(w,arr,h);
        cout<<moves<<endl;
    }
    return 0;
}