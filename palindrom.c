#include<stdio.h>
#include<math.h>
int check_pal(int n)
{
    int arr[sizeof(n)];
    int i=0;
    while (n!=0)
    {
        int term=n%10;
        arr[i]=term;
        i++;
        n=(n-term)/10;
    }
    return *arr;
    int length=sizeof(arr);
    for (int i = 0; i < length; i++)
    {
        switch (arr[i])
        {
        case arr[length-i-1]:
            printf("its  a pallindrom");
        default:
             printf("its not a pallindrom");
             break;
        }
    }
   
}
int main()
{
    int n;
    scanf("%d",&n);
    check_pal(n);
}