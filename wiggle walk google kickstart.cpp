#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int wiggle_walk(int N,int row, int column,int SR,int SC,string rule)
{
for (int i = 0; i <=N-1; i++)
{
    int tempcolumn=SC;
    if (rule[i]=='N')
    {
        SC--;
        if (SC==tempcolumn)
        {
            for (int i = tempcolumn-1; i>=1; i--)
            {
                SC--;
            }
        }
    }
    if (rule[i]=='S')
    {
        SC++;  
        if (SC==tempcolumn)
        {
            for (int i = tempcolumn+1; i<=column; i++)
            {
                SC++;
            }
        }
    }
    int temprow=SR;
    if (rule[i]=='W')
    {
        SR--;
        if (SC==temprow)
        {
            for (int i = temprow-1; i>=1; i--)
            {
                SR--;
            }
        }
    }
    if (rule[i]=='E')
    {
        SR++;  
        if (SC==temprow)
        {
            for (int i = temprow+1; i<=row; i++)
            {
                SR++;
            }
        }
    }
}
if (SC>column)
{
    SC-=1;
}
if (SR<row)
{
    SR-=1;
}
cout <<SR<<' '<<SC;
return 0;
}
int main() {
  int T;
  cin >> T;
  for (int t = 1; t <= T; ++t) {
    int N, R, C, Sr, Sc;
    string instructions;
    cin >> N >> R >> C >> Sr >> Sc >> instructions;
    cout << "Case #" << t << ": "; wiggle_walk(N, R, C, Sr, Sc, instructions); cout<< endl;
  }
}
