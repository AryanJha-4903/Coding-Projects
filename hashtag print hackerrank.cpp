#include<iostream>
using namespace std;
void hashtag(int n)
{
    for (int i = 1; i <=n; i++)
    {
        for (int j = n; j >=i-1; j--)
        {
            cout<<" ";
        }
        for (int j = 1; j <=i; j++)
        {
            cout<<"#";
        }
        cout<<"\n";
    }
} 
int main()
{
    int n;
    cin>>n;
    hashtag(n);
    return 0;
}