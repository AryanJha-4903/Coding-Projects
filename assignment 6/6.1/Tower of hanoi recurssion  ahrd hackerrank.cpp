#include<iostream>
using namespace std;

void tower_of_hanoi(int input,char form, char to,char aux)
{
    if (input==0){
        return;
    }
    tower_of_hanoi(input-1,form,aux,to);
    cout << "Move disk " << input << " from rod "<<form<< " to rod "<<to<< endl;
    tower_of_hanoi(input-1,aux,to,form);
}
int main()
{
    int input;
    cin>>input;
    tower_of_hanoi(input,'A','B','C');
}