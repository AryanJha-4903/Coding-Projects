#include <iostream>
#include <cstring>
#include<algorithm>
using namespace std;

int goodnesscore(char *input,int size,int score)
{
    int  count=0;
    for (int i = 0; i <=(size-1)/2; i++)
    {
        if (input[i]!=input[size-1-i])
        {
            count++;
        }
    }
    int step;
    if (count==score)
    {
        step=0;
    }
    else if(count > score) {
      minOperations = count - score;
  }
    else
    {
        step=score-count;
    }
    return step;
}
int main()
{
    int test;
    cin>>test;
    while (test--)
    {
        int size,score;
        char input[size];
        cin>>size;
        cin>>score;
        cin>>input;
        int result=goodnesscore(input,size,score);
        cout<<result<<endl;
    }
}