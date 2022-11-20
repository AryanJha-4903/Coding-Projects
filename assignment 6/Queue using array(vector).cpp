#include<iostream>
#include<vector>
using namespace std;
class Queue{
    vector<int> arr;
    int head;
    int tail;
    public:
    Queue(){
        head= -1;
        tail= -1;
    }
    void push(int value){
        arr.push_back(value);
        tail++;
        if (head==-1){
            head++;
        } 
    }
    void pop(){
        if (head==-1 || head>tail){
        cout<<"the stack is empty"<<endl;
        return;
       }
       head++;
    }
    void peek(){
       if (head==-1 || head>tail){
        cout<<"the stack is empty"<<endl;
        return;
       }
       cout<<arr[head]<<endl;
    } 
    bool isempty(){
        if (head==-1 || head>tail){
        return true;
        }
        return false;
    }
    void size(){
        cout<<tail-head+1<<endl;
    }
    void print(){
        for (int i=head;i<=tail;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main ()
{
    Queue s;
    s.push(2);
    s.push(5);
    s.push(6);
    s.push(10);
    s.print();
    s.size();
    s.peek();
    s.pop();
    s.peek();
    s.size();
    s.print();
}