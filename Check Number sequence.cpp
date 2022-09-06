#include<iostream>
#include<cmath>
using  namespace std;
/*int sequence_check(int n,int arr[n])
{
    int U_arr[]={},L_arr[]={};
    for (int i = 0; i <n; i++)
    {
        if (arr[i]<=arr[i+1])
        {
            U_arr[i]=arr[i];
        }
        else{
            continue;
        }   
    }
    for (int i = n; i >=0; i--)
    {
        if (arr[i]>=arr[i-1])
        {
            L_arr[i]=arr[i];
        }
        else{
            continue;
        }
    }
    int U_size=sizeof(U_arr),L_size=sizeof(L_arr);
    for ( int j = 0; j < U_size; j++)
    {
       if (U_arr[j]>U_arr[j+1])
       {
        continue;
       }
       else{
        break;
        cout<<false;
       }
    }
    for ( int j = 0; j < L_size; j++)
    {
       if (L_arr[j]<L_arr[j+1])
       {
        continue;
       }
       else{
        break;
        cout<<false;
       }
    }
    cout<<true;
}*/
int main()
{
    int n,arr[n];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int U_arr[]={0},L_arr[]={0};
    for (int i = 0; i <n; i++)
    {
        if (arr[i]<=arr[i+1])
        {
            U_arr[i]=arr[i];
        }
        else{
            continue;
        }   
    }
    for (int i = n; i >=0; i--)
    {
        if (arr[i]>=arr[i-1])
        {
            L_arr[i]=arr[i];
        }
        else{
            continue;
        }
    }
    int U_size=sizeof(U_arr),L_size=sizeof(L_arr);
    for ( int j = 0; j < U_size; j++)
    {
       if (U_arr[j]>U_arr[j+1])
       {
        continue;
       }
       else{
        break;
        cout<<"false";
       }
    }
    for ( int j = 0; j < L_size; j++)
    {
       if (L_arr[j]<L_arr[j+1])
       {
        continue;
       }
       else{
        break;
        cout<<"false";
       }
    }
    cout<<"true";
}
