#include<iostream>
using namespace std;

int triplet(int arr[3],int brr[3])
{
    int ascore=0;
    int bscore=0;
    for (int i = 0; i <=2; i++)
    {
        if (arr[i]>brr[i])
        {
            ascore++;
        }
        if (arr[i]<brr[i])
        {
            bscore++;
        }
    else
    {
        continue;
    }
    }
    cout<<ascore<<" "<<bscore;
    return 0;
}
int main()
{
    int arr[3];
    int brr[3];
    for (int i = 0; i <=2; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i <=2; i++)
    {
        cin>>brr[i];
    }
    triplet(arr,brr);
    return 0;
}