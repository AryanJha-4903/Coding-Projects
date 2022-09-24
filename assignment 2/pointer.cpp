#include<iostream>
using namespace std;
void fun(int *a,int *b)
{
    int c=*a;
    int d=*b;
    *a=c+d;
    if (c>d)
    {
        *b=c-d;
    }
    if (c<d)
    {
        *b=d-c;
    }
    if (c==d)
    {
        *b=0;
    }
}
int main()
{
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    fun(&a,&b);
    cout<<a<<"\n"<<b;
    return 0;
}