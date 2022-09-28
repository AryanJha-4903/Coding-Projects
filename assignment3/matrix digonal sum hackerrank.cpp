#include<iostream>
#include<math.h>
using namespace std;

int mod(int a,int b)
{
    int c;
    if (a>b)
    {
        c=a-b;
    }
    if (b>a)
    {
        c=b-a;
    }
    if (a==b)
    {
        c=0;
    }
    
    
    return c;
}
int matrix_median(int **arr, int n)
{
    int sum1=0;
    int sum2=0;
    for (int i = 0; i <=n-1; i++)
    {
        for (int j = 0; j <=n-1; j++)
        {
            if (i==j)
            {
                sum1=sum1+arr[i][j];
            }
        }
    }
    int row=n-1;
    int column=0;
    for (int k = n-1; k >=0; k--)
    {
        for (int x = 0; x <=n-1; x++)
        {
            if (k==row&&x==column)
            {
                sum2=sum2+arr[k][x];
                row--;
                column++;
            }
        }
    }
    int result=mod(sum1,sum2);
    return result;
}
int main()
{
    int n;
    cin>>n;
    int** arr;
    arr = new int*[n];
    for(int i=0; i<n; i++){
        arr[i] = new int[n];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    cout<<matrix_median(arr,n);
    return 0;
    delete [] arr;
}
