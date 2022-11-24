#include <bits/stdc++.h>
using namespace std;
int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
    stack<int> c1;
    stack<int> c2;
    stack<int> c3;
    int i1=0;
    for (int j = h1.size() - 1; j >= 0; j--)
    {
        i1=i1+h1[j];
        c1.push(i1);
    }
    int i2=0;
    for (int j = h2.size() - 1; j >= 0; j--)
    {
        i2=i2+h2[j];
        c2.push(i2);
    }
    int i3=0;
    for (int j = h3.size() - 1; j >= 0; j--)
    {
        i3=i3+h3[j];
        c3.push(i3);
    }
    while (true)
    {
        if (c1.empty()==true || c2.empty()==true || c3.empty()==true)
        {
           return 0;
        }
        if (c1.top()==c2.top()&&c2.top()==c3.top())
        {
            return c1.top();
        }
        if (c1.top()>=c2.top()&&c1.top()>=c3.top())
        {
            c1.pop();
        }
        else if (c2.top()>=c3.top()&&c2.top()>=c1.top())
        {
            c2.pop();
        }
        else if (c3.top()>=c2.top()&&c3.top()>=c1.top())
        {
            c3.pop();
        }
    }
}

int main()
{
    int s1,s2,s3;
    cin>>s1>>s2>>s3;
    vector<int>h1;
    vector<int>h2;
    vector<int>h3;
    for (int i = 0; i < s1; i++)
    {
        int x;
        scanf("%d",&x);
        h1.emplace_back(x);
    }
    for (int i = 0; i < s2; i++)
    {
        int x;
        scanf("%d",&x);
        h2.emplace_back(x);
    }
    for (int i = 0; i < s3; i++)
    {
        int x;
        scanf("%d",&x);
        h3.emplace_back(x);
    }
    printf("%d",equalStacks(h1,h2,h3));
}
