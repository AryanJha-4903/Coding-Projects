#include <iostream>
using namespace std;

int merge(int *arr1, int size1, int *arr2, int size2, int *ans)
{
    int ansize=size1+size2;
	for (int i = 0; i <=size1-1; i++)
	{
		ans[i]=arr1[i];
	}
	for (int i = size1; i <=ansize-1; i++)
	{
		ans[i]=arr2[i-size1];
	}
    for (int i = 0; i<=ansize-1; i++)
    {
        for (int j = 0; j < ansize-1-i; j++)
        {
            if(ans[j]>ans[j+1])
			{
                int temp=ans[j];
                ans[j]=ans[j+1];
                ans[j+1]=temp;
            }  
        }
	}	
    return *ans;
}

int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size1;
		cin >> size1;

		int *arr1 = new int[size1];

		for (int i = 0; i < size1; i++)
		{
			cin >> arr1[i];
		}

		int size2;
		cin >> size2;

		int *arr2 = new int[size2];

		for (int i = 0; i < size2; i++)
		{
			cin >> arr2[i];
		}

		int *ans = new int[size1 + size2];

		merge(arr1, size1, arr2, size2, ans);

		for (int i = 0; i < size1 + size2; i++)
		{
			cout << ans[i] << " ";
		}

		cout << endl;
		delete[] arr1;
		delete[] arr2;
		delete[] ans;
	}
}