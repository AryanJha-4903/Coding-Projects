#include<bits/stdc++.h>
using namespace std;
int arranging_coin(int coin,int stairs)
{
    int i=1;
    int r=0;
    while(i<=stairs)
    {
        coin=coin-i;
        if(coin<=0&&stairs<0)
        {
            break;
        }
        ++i;
        ++r;
    }
    return r-1;
}
int main()
{
    int coin,stairs;
    cin>>coin>>stairs;
    cout<<arranging_coin(coin,stairs);
}
