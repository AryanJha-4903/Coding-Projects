<<<<<<< HEAD
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int binary,term,decimal=0,temp;
    cin>>binary;
    temp=binary;
    int i=0;
    while (temp>0)
    {
        term=temp%10;
        if (term==1)
        {
        decimal+=(pow(2,i));
        }
        temp=temp/10;
        i++;
    }
    cout<<decimal;
=======
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int binary,term,decimal=0,temp;
    cin>>binary;
    temp=binary;
    int i=0;
    while (temp>0)
    {
        term=temp%10;
        if (term==1)
        {
        decimal+=(pow(2,i));
        }
        temp=temp/10;
        i++;
    }
    cout<<decimal;
>>>>>>> 2d2a7f5bdd3e8483c118c8fbdd6b80340b52f307
}