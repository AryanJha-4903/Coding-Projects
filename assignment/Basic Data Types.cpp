#include<iostream>
using namespace std;
int main()
{
    int i;
    long long l;
    char c;
    float f;
    double d;
    scanf("%d %ld %c %f %lf",&i,&l,&c,&f,&d);
    printf("%d\n",i);
    printf("%ld\n",l);
    printf("%c\n",c);
    printf("%0.3f\n",f);
    printf("%0.9lf\n",d);
    
    return 0;
}    
