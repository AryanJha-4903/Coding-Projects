// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int b_search(vector<int>a,int target)
{
    int start=0;
    int end=a.size()-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(a[mid]==target)
        {
            return mid;
        }
        else if(a[mid]>target)
        {
            end=mid-1;
        }
        else if(a[mid]<target)
        {
            start=mid+1;
        }
        else{
            return -1;
        }
    }
}
int main()
{
    vector<int>a;
    int size;
    cin>>size;
    int target;
    cin>>target;
    for(int i=0;i<size;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    cout<<b_search(a,target);
    return 0;
}
