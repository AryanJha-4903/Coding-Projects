#include <iostream>
#include<algorithm>
using namespace std;

int NumberOfRecordBreakingDays(int days, int *visit)
{
  int count=0;
  int temp;
  if (visit[0]>visit[days-1])
  {
    temp=visit[0];
    for (int i = 0; i <=days-1; i++)
    {
        if (visit[i]>temp)
        {
            temp=visit[i];
            count++;
        }
    }
  }
  if (visit[0]<visit[days-1])
  {
    temp=visit[days-1];
    count=1;
    for (int i = days-1; i >=0; i--)
    {
        if (visit[i]>temp)
        {
            temp=visit[i];
            count++;
        }
    }
  }
  return count;
}

int main() {
  int T;
  cin >> T;
  for (int tc = 1; tc <= T; ++tc) {
    int N;
    cin >> N;
    int V[N];
    for (int i = 0; i < N; ++i) {
      cin >> V[i];
    }
    cout << "Case #" << tc << ": " << NumberOfRecordBreakingDays(N, V) << endl;
  }
  return 0;
}
