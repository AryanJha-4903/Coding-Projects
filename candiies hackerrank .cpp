#include<bits/stdc++.h>
using namespace std;
int candies(vector<int> kid)
{
    vector<int>check(kid.size(),1);
    for (int i = kid.size()-1; i >0; i--)
    {
        if (kid[i]>kid[i-1])
        {
            check[i]+=check[i-1];
        }
    }
    for (int i = 0; i < kid.size()-1; i++)
    {
        if (kid[i]>kid[i+1]&& check[i] < check[i+1]+1)
        {
            check[i]=check[i+1]+1;
        }
    }
    for (auto &&i : check)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for (auto &&i : check)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    int result=0;
    for (int i = 0; i < kid.size(); i++)
    {
        int add=(check[i]>check[i])? check[i]:check[i];
        cout<<add<<" ";
        result+=add;
    }
    cout<<endl;
    return result;
}
int main()
{
    int size;
    cin>>size;
    vector<int>input;
    while (size--)
    {
        int x;
        cin>>x;
        input.push_back(x);
    }
    cout<<candies(input);
}