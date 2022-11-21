#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class stack{
    vector<int> arr;
    int head;
    int max;
    int sec;
    public:
    stack(){
        head=-1;
        max=0;
    }
    void push(int value){
        arr.push_back(value);
        head++;
        if(max<value){
            sec=max;
            max=value;
        }
    }
    void pop(){
        if (arr[head]==max && sec!=max)
        {
            max=sec;
        }
        arr.pop_back();
        head--;
    }
    void maximum(){
        cout<<max<<endl;
    }
};
int main(){
    int test;
    cin>>test;
    stack input;
    while (test--)
    {
        int comand;
        cin>>comand;
        if(comand==1){
            int x;
            cin>>x;
            input.push(x);
        }
        if(comand==2){
            input.pop();
        }
        if(comand==3){
            input.maximum();
        }
    }
}