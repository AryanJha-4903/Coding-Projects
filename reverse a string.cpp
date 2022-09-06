#include <iostream>
#include<cstring>
#include<string.h>
using namespace std;
void reverseStringWordWise(char input[])
{
    int len=strlen(input);
    int count=0;
    for (int i = len; i>=0; i--)
    {
        count++;
        if (input[i]==' '||i==0)
        {
            for (int j = i; j<=i+count-1; j++)
            {
                cout<<input[j];
        }
        cout<<' ';
        count=0;
    }
}
}

int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
}