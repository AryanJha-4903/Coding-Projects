#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Hour_Glass_Sum(int input_array[6][6])
{
    
    int Values[16];
    for(int i =0; i<16; i++)
    {
        for (int r = 0; r < 4; r++)
       {
        for (int c = 0; c < 4; c++)
        {
            Values[i]=input_array[r][c]+input_array[r+1][c]+input_array[r+2][c]+input_array[r+1][c+1]+input_array[r][c+2]+input_array[r+1][c+2]+input_array[r][c+2];
        }   
       }   
    }
    int temp;
    for (int i = 0; i < 16; i++)
    {
        if (temp<Values[i])
        {
            temp=Values[i];
        }
    }
    printf("%d",temp);
}
int main()
{
    int input_array[6][6];
    for (int r = 0; r < 6; r++)
    {
        for (int c = 0; c < 6; c++)
        {
            scanf("%d",input_array[r][c]);
        }
    }
    Hour_Glass_Sum(input_array);
    
}
