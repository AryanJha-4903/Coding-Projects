#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int input,output=0;
    cin>> input;
    while(input!=0)
    {
        int term=input%10;
        output=output*10+term;
        input=(input-term)/10;
    }
    cout<<output;
}