#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>>number_stair(int n)
{
    int x=1;
    vector<vector<int>>result;
    for(int i=0;i<=n-1;i++)
    {
        vector<int>temp;
        for(int j=0;j<=i;j++)
        {
            temp.push_back(x);
            x++;
        }
        result.push_back(temp);
    }
    return result;
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>>result=number_stair(n);
    for(int i=0;i<=result.size();i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
