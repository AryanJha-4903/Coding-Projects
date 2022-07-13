#include<iostream>
using namespace std;
int main()
{
    char c;
    int s=0;
    int n=0;
    int t=0;
    while (c!='$')
    {
        c=cin.get();
        if (int(c)>=97&&int(c)<=122)
        {
            s++;
        }
        if (int(c)>=48&&int(c)<=57)
        {
            n++;
        }
        if (c==' '||c=='\n'||c=='\t')
        {
            t++;
        }
    }
    cout<<s<<" "<<n<<" "<<t;
}