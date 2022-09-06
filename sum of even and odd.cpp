#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int evensum=0;
    int oddsum=0;
    while (a!=0)
    {
        int n=a%10;
        if (n%2==0)
        {
            evensum+=n;
        }
        if (n%2!=0)
        {
            oddsum+=n;
        }
        a=(a-n)/10;
    }
    printf("%d %d",evensum,oddsum);
    return 0;
}
