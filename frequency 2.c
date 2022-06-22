#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

   char *s; /*main chracter*/
   int a, b; /*vriablebes for qperation*/
   s=(char*)malloc(1024*sizeof(char));/*forsizing*/
   scanf("%s",s);
   s=realloc(s,strlen(s)+1*sizeof(char));
   int length=strlen(s);
   int arr[10];
   for (a=0;a<=9;a++){arr[a]=0;}
   for(b=0;b<=9;b++)
   {
       for (int i=0;i<length;i++)
       {
          if (s[i]=b)
          {
             arr[b]+=1;
          }
       }
       printf("%d ", arr);
   }   
   
   return 0;
}    
