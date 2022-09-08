<<<<<<< HEAD
#include<iostream>
using namespace std;

int main()
{
    int n ;
    scanf("%d", &n);
    int x=1;
    for (int i = 0; i < n; i++)
    {
        int y=x;
        for (int j = 0; j <n-i; j++)
        {
           cout<<" ";
        }
        for (int j = 0; j <=i; j++)
        {
            printf("%d",y);
            y++;
        }
        cout<<"\n";
        x++;
    }
    return 0;
}

=======
#include<iostream>
using namespace std;

int main()
{
    int n ;
    scanf("%d", &n);
    int x=1;
    for (int i = 0; i < n; i++)
    {
        int y=x;
        for (int j = 0; j <n-i; j++)
        {
           cout<<" ";
        }
        for (int j = 0; j <=i; j++)
        {
            printf("%d",y);
            y++;
        }
        cout<<"\n";
        x++;
    }
    return 0;
}

>>>>>>> 2d2a7f5bdd3e8483c118c8fbdd6b80340b52f307
    