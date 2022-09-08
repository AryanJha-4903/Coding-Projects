<<<<<<< HEAD
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int decimal,base=1;
    unsigned long binary=0;
    cin>>decimal;
    while (decimal>0)
    {
        int term=decimal%2;
        binary=binary+(base*term);
        decimal=decimal/2;
        base=base*10;
    }
    cout<<binary;
}
=======
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int decimal,base=1;
    unsigned long binary=0;
    cin>>decimal;
    while (decimal>0)
    {
        int term=decimal%2;
        binary=binary+(base*term);
        decimal=decimal/2;
        base=base*10;
    }
    cout<<binary;
}
>>>>>>> 2d2a7f5bdd3e8483c118c8fbdd6b80340b52f307
