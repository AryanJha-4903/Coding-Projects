#include<iostream>
using namespace std;
int main()
{
    int n;
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
            y--;
            
        }
        int z=2;
        for (int j = 0; j <=i-1; j++)
        {

            printf("%d",z);
            z++;
        }
        cout<<"\n";
        x++;
    }
    return 0;
}

    
  


