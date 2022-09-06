#include <iostream>
#include <cstring>
using namespace std;
void longword(char *input)
{
    int len=strlen(input);
    if (len>10)
    {
        cout<<input[0]<<len-2<<input[len-1];
    }
    else
    {
        cout<<input;
    }
}
int main()
{
    int test;
    cin>>test;
    while (test--)
    {
        char input[100000];
        cin>>input;
        longword(input);
        cout<<"\n";
        input[0]='\0';
    }
    return 0;
}
