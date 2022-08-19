#include <iostream>
using namespace std;

void rotate(int *input, int d, int n)
{
    for (int i = 1; i<=d; i++)
    {
        int temp=input[0];
        for (int j = 0; j <=n-1; j++)
        {
            input[j]=input[j+1];
        }
        input[n-1]=temp;
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

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}

	return 0;
}