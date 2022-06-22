#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int array_reverse(int*input_array,int input_index)
{
    int *temp;
    temp=(int*)malloc(input_index*sizeof(int));
    for (int i = 0,j=input_index-1; i < input_index,j>=0; i++,j--)
    {
         temp[i]=input_array[j];
         printf("%d ",temp[i]);
    }
    
}
int main()
{
    int input_index,*input_array;
    scanf("%d",&input_index);
    input_array=(int*)malloc(input_index*sizeof(int));
    for (int i = 0; i < input_index; i++)
    {
        scanf("%d",&input_array[i]);
    }
     array_reverse(input_array,input_index);
    return 0;
}
    