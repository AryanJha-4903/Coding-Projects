#include<iostream>
using namespace std;
int main()
{
    char x;
    cout<<"enter your character:"<<endl;
    cin>>x;
     if(int(x)>=65&&int(x)<=90)
    {
        cout<<"1";
    }
    if(int(x)>=97&&int(x)<=122)
    {
        cout<<"0";
    }
     if(int(x)<65||int(x)>122)
    {
        cout<<"-1";
    }
    return 0;
}
