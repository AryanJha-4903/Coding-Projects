#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int input_index,*input_array;
    scanf("%d",&input_index);
    input_array=(int*)malloc(input_index*sizeof(int));
    for (int i = 0; i < input_index; i++)
    {
        scanf("%d",&input_array[i]);
    }
    int *temp;
    temp=(int*)malloc(input_index*sizeof(int));
    for (int i = 0,j=input_index; i < input_index,j>=0; i++,j--)
    {
         temp[i]=input_array[j];
    }
     printf("%d",temp);
    return 0;
}
    