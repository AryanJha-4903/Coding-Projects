#include<iostream>
#include<algorithm>
using namespace std;
int candi_divider(int *input,int bag,int child)
{
    int total=0;
    for (int i = 0; i <=bag-1; i++)
    {
        total=total+input[i];
    }
    int result =total%child;
    return result;
}
int main()
{
    int test;
    cin>>test;
    for (int i = 1; i <=test; i++)
    {
        int bags;
        cin>>bags;
        int child;
        cin>>child;
        int *input = new int[bags];
        for (int i = 0; i <=bags-1; i++)
        {
            cin>>input[i];
        }
        int result=candi_divider(input,bags,child);
        cout << "Case #" <<i<< ": "<<result<<endl;
        delete[] input;
    }
}
