#include <iostream>
#include<algorithm>
#include <string>
using namespace std;
void watermelondivider(int kg)
{
    if (kg%2==0&&kg!=2)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
main()
{
    int kg;
    cin>>kg;
    watermelondivider(kg);
    
}