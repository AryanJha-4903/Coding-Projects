#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int temp=0;
    while (n!=0)
    {
        int r=n%10;
        temp+=r;
        n=(n-r)/10;
    }
    printf("%d",temp);
    return 0;
}