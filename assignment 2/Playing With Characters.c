#include<stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char c;
    char s[20];
    char sen[100];
    scanf("%c", &c);
    scanf("%s", &s);
    scanf("\n");
    scanf("%[^\n]%*c",&sen);
    printf("%c\n",c);
    printf("%s\n",s);
    printf("%s\n",sen);
}