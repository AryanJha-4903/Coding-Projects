#include<stdio.h>
#include<string.h>
#define max 1000

int main()
{
    char a[1000];
    fgets(a,max,stdin);
    printf("Hello, World!\n");
    printf("%s",a);
}