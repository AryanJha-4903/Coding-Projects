#include<iostream>
#include<vector>
using namespace std;
class stack{
    vector<int> arr;
    int head;
    public:
    stack(){
        head=-1;
    }
    void push(int value){
        arr.push_back(value);
        head++;
    }
    void pop(){
        if (head==-1){
        cout<<"the stack is empty"<<endl;
        return;
       }
        arr.pop_back();
        head--;
    }
    void top(){
       if (head==-1){
        cout<<"the stack is empty"<<endl;
        return;
       }
       cout<<arr[head]<<endl;
    } 
    bool isempty(){
        if (head==-1){
        return 1;
        }
        return 0;
    }
    void size(){
        cout<<head+1<<endl;
    }
    void print(){
        for (auto &&i : arr)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
};
int main ()
{
    stack s;
    s.push(2);
    s.push(5);
    s.push(6);
    s.push(10);
    s.print();
    s.top();
    s.pop();
    s.top();
    s.size();
    s.print();
}