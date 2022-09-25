#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int *arr)
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
    int a[4];
    for (int i = 0; i <=3; i++)
    {
        scanf("%d",&a[i]);
    }
    int ans = max_of_four(a);
    printf("%d", ans);
    return 0;
}