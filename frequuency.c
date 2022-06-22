#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

   char *s;
   int a=0, b=0, c=0, d=0, e=0, f=0, g=0, h=0, j=0, k=0 ; 
   s=(char*)malloc(1024*sizeof(char));
   scanf("%[^\n]",s);
   s=realloc(s,strlen(s)+1*sizeof(char));
   int length=strlen(s);
   for(int i=0;i<=length-1;i++)
   {
       if(s[i]=='0')
       {
           a+=1;
       }
       if(s[i]=='1')
       {
           b+=1;
       }
       if(s[i]=='2')
       {
           c+=1;
       }
       if(s[i]=='3')
       {
           d+=1;
       }
       if(s[i]=='4')
       {
           e+=1;
       }
       if(s[i]=='5')
       {
           f+=1;
       }
       if(s[i]=='6')
       {
           g+=1;
       }
       if(s[i]=='7')
       {
           h+=1;
       }
       if(s[i]=='8')
       {
           j+=1;
       }
       if(s[i]=='9')
       {
           k+=1;
       }
   }
    printf("%d %d %d %d %d %d %d %d %d %d ", a, b, c, d, e, f, g, h, j, k);




    return 0;
}