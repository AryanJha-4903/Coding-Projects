<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 1 ; i <=n; i++)
    {
         char y=64+n+1-i;
        for (int j = 1; j <=i; j++)
        {
            cout<<y;
          y++;
        }

        cout<<"\n";
    }
}

=======
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 1 ; i <=n; i++)
    {
         char y=64+n+1-i;
        for (int j = 1; j <=i; j++)
        {
            cout<<y;
          y++;
        }

        cout<<"\n";
    }
}

>>>>>>> 2d2a7f5bdd3e8483c118c8fbdd6b80340b52f307
