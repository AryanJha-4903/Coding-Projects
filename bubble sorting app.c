#include<stdio.h>
/*int bubble_s(int arr[],int size)
{
    for (int i = 0; i <=size-1; i++)
    {
        for (int j = 0; j <=size-1-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return *arr;
}*/
int main()
{
    int size,temp;
    int arr[size];
    scanf("%d",&size);
    for (int i = 0; i <=size-1; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i <=size-1; i++)
    {
        for (int j = 0; j <=size-1-i; j++)
        {
            if (arr[j]>=arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int d=0;d<=size-1;d++)
    {
        printf("%d",arr[d]);
    }
}


