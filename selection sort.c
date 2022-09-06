#include<stdio.h>
int selection_sort(int arr[],int size)
{
    int temp;
    for (int i = 0; i <=size-1; i++)
    {
        int minindex=i;
        for (int j = i+1; j <=size-1 ; i++)
        {
            if (arr[j]<arr[minindex])
            {
                minindex=j;
            }
            temp=arr[minindex];
                arr[minindex]=arr[j];
                arr[j]=temp;
        }
    }
}
int main()
{
    int arr[]={2,3,4,7,9};
    selection_sort(arr,5);
    for (int i = 0; i <=4; i++)
    {
        printf("%d", arr[i]);
    }
}