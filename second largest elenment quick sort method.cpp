#include <iostream>
using namespace std;

int findSecondLargest(int *input, int n)
{
   int max=input[0];
   for (int i=0; i<=n-1; i++)
   {
	
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