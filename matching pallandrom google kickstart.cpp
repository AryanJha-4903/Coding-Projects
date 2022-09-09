#include <iostream>
#include <cstring>
#include<string.h>

using namespace std;
bool checkPalindrome(string input, int n) {
    for (int i = 0; i<=(n-1)/2; i++)
    {
        if (input[i]==input[n-1-i])
        {
            return 1;
            continue;
        }
        else
        {
            break;
        }
    }
    return 0;
}
string matching(string input, int n)
{
    string result;
    string temp=input;
    int length=0;
    for (int i = 0; i <=n-1; i++)
    {
        length++;
        string temp=temp+input[i];
        bool x=checkPalindrome(temp,n+length);
        if (x==1)
        {
            break;
            result=temp.substr(n,n+length-1);
        }
        else
        {
            continue;
        }
    }
    return result;
}
main()
{
    int test;
    cin>>test;
    for (int i = 1; i <=test ; i++)
    {
        int n;
        cin>>n;
        string input;
        cin>>input;
        string result=matching(input,n);
        cout<<"Case"<<" #"<<i<<": "<<result<<endl;
    }
}