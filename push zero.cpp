#include <iostream>
using namespace std;
int pushZeroesEnd(int *input, int size)
{
     for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(input[j]==0){
                int temp=input[j];
                input[j]=input[j+1];
                input[j+1]=temp;
            }
        }
    }
    return *input;
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

		pushZeroesEnd(input, size);

		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}