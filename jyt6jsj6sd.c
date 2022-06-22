#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() 
{

    int n;
    scanf("%d", &n);
    int length=2*n-1;
    int start=0;
    int end=length-1;
    int ary[length][length];
    while(n!=0)
    {
      for(int i=start; i<=end; i+=1)
      {
          for( int j=start; j<=end; j+=1)
          {
              if(i==start||i==end||j==start||j==end)
              {
                  ary[i][j]=n;
                
              }
          } 
      }
              start++;
              end--;
              n--;
          
          }
          for(int i=0; i<=length; i+=1)
          {
               for( int j=0; j<=length; j+=1)
               {
                   printf("%d",ary[i][j]);
                   
               }
          
                   printf("\n");
          }       
        return 0;  
      }
    
