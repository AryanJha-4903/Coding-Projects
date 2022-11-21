#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class stack{
    vector<int> arr;
    int head;
    int height;
    public:
    stack()
    {
        head= -1;
    }
    void push(int value){
        arr.push_back(value);
        head++;
   }
    void pop(){
        arr.pop_back();
        head--;
    }
    int top(){
        return arr[head];
    }
    bool isempty(){
        if (head==-1){
        return true;
        }
        return false;
    }
    stack cumlative_stack(){
        int x=0;
        stack c;
        for (auto &&i : arr)
        {
            c.push(x+i);
            x=x+i;
        }
        return c;
    }
};
int equal_stacks(stack h1,stack h2,stack h3)
{
    stack c1=h1.cumlative_stack();
    stack c2=h2.cumlative_stack();
    stack c3=h3.cumlative_stack();
    while (true)
    {
        if (c1.top()==c2.top()&&c2.top()==c3.top())
        {
            break;
        }
        if (c1.isempty()==true || c2.isempty()==true || c3.isempty()==true)
        {
           return 0;
        }
        if (c1.top()>c2.top()&&c1.top()>c3.top())
        {
            c1.pop();
        }
        if (c2.top()>c3.top()&&c2.top()>c1.top())
        {
            c2.pop();
        }
        if (c3.top()>c2.top()&&c3.top()>c1.top())
        {
            c3.pop();
        }
    }
    return c1.top();
    
}

int main()
{
    int t1,t2,t3;
    cin>>t1>>t2>>t3;
    stack h1;
    vector<int> input1;
    stack h2;
    vector<int> input2;
    stack h3;
    vector<int> input3;
    for (int i = 0; i < t1; i++)
    {
        int x;
        cin>>x;
        input1.push_back(x);
    }
    for (int j = t1 - 1; j >= 0; j--)
    {
        h1.push(input1[j]);
    }
    for (int i = 0; i < t2; i++)
    {
        int x;
        cin>>x;
        input2.push_back(x);
    }
    for (int j = t2 - 1; j >= 0; j--)
    {
        h2.push(input2[j]);
    }
    for (int i = 0; i < t3; i++)
    {
        int x;
        cin>>x;
        input3.push_back(x);
    }
    for (int j = t3 - 1; j >= 0; j--)
    {
        h3.push(input3[j]);
    }
    cout<<equal_stacks(h1,h2,h3);
}