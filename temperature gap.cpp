<<<<<<< HEAD
#include<iostream>
using namespace std;
int temp_gap(int s,int w,int e)
{
    int C;
    for (int i = s; i <= e; i+=w)
    {
        C = ((i-32)*5)/ 9;
        printf("%d  %d\n",i,C);
    }
    return 0;
}

int main()
{
    int s, w, e;
    cin>>s >> e>> w;
    temp_gap(s, w, e);
}

=======
#include<iostream>
using namespace std;
int temp_gap(int s,int w,int e)
{
    int C;
    for (int i = s; i <= e; i+=w)
    {
        C = ((i-32)*5)/ 9;
        printf("%d  %d\n",i,C);
    }
    return 0;
}

int main()
{
    int s, w, e;
    cin>>s >> e>> w;
    temp_gap(s, w, e);
}

>>>>>>> 2d2a7f5bdd3e8483c118c8fbdd6b80340b52f307
