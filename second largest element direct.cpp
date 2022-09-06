#include <iostream>
using namespace std;

int findSecondLargest(int *input, int n)
{
   int max=input[0], secmax=input[0];
   for (int i=0; i<=n-1; i++)
   {
	if (input[i]>=max)
    {
       max=input[i];
    }
   }
    for (int k = 0; k <=n-1; k++)
    {
        if (input[k]==max)
        {
            input[k]= -1;
        }
    }
    for (int j=0; j<n-1; j++)
    {
        if (input[j]>secmax)
        {
            secmax=input[j];
        }
    } 
   if (secmax==max)
   {
    return -1;
   }
   else
   {
    return secmax;
   }
   
   
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{

		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << findSecondLargest(input, size) << endl;

		delete[] input;
	}

	return 0;
}