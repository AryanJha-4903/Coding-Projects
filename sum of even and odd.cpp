<<<<<<< HEAD
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
=======
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
>>>>>>> 2d2a7f5bdd3e8483c118c8fbdd6b80340b52f307
