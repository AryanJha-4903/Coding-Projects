#include <bits/stdc++.h>
#include<vector>
using namespace std;
int mod(int a,int b)
{
    if (a>b)
    {
        return a-b;
    }
    if (a<b)
    {
        return b-a;
    } 
    return 0;
}
int minimum(vector<int>arr,int size)
{
    int temp=arr[0];
    for (int i = 0; i <=size-1; i++)
    {
        if (arr[i]<temp)
        {
            temp=arr[i];
        }
    }
    return temp;
}
int magicsquare(vector<vector<int>>box)
{
    vector<vector<vector<int>>> test1={
        {{8,3,4},{1,5,9},{6,4,2}},
        {{8,1,6},{3,5,7},{4,9,2}},
        {{4,9,2},{3,5,7},{8,1,6}},
        {{2,9,4},{7,5,3},{6,1,8}},
        {{4,3,8},{9,5,1},{2,7,6}},
        {{6,7,2},{1,5,9},{8,3,4}},
        {{2,7,6},{9,5,1},{4,3,8}},
        {{6,1,8},{7,5,3},{2,9,4}}
        };
     vector<int>arr(8);
    for (int k = 0; k <=7; k++)
    {
        int cost=0;
        for (int i = 0; i <=2; i++)
        {
           for (int j = 0; j <=2; j++)
           {
              if (test1[k][i][j]!=box[i][j])
              {
                cost+=mod(test1[k][i][j],box[i][j]);
              }
           }
        }
        if (cost==15)
        {
            cost=16;
        }
        arr[k]=cost;
        cout<<arr[k]<<"\n";
    }
    return minimum(arr,8);
}
int main()
{
    vector<vector<int>>arr(3,vector<int>(3));
    for (int i = 0; i <=2; i++)
    {
        for (int j = 0; j <=2; j++)
        {
            scanf("%d",&arr[i][j]);
        } 
    }
    cout<<magicsquare(arr);
}
