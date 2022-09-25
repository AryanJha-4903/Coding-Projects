#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d",&n);
    int arr[n];
    int temp=0;
    for (int i = 0; i <=n-1; i++)
    {
        scanf("%d",&arr[i]);
        temp+=arr[i];
    }
    printf("%d",temp);
    return 0;
}