#include<iostream>
using namespace std;
void minisum(double arr[5])
{
    for (int i = 0; i <=4; i++)
    {
        for (int j = 0; j<=i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                double temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
    double min=0;
    double max=0;
    for (int i = 0; i <=3; i++)
    {
        min+=arr[i];
    }
    for (int i = 1; i <=4; i++)
    {
        max+=arr[i];
    }
    cout<<min<<" "<<max;
}
int main()
{
    double arr[5];
    for (int i = 0; i <=4; i++)
    {
        cin>>arr[i];
    }
    minisum(arr);
    return 0;
}