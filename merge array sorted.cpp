#include <iostream>
using namespace std;
void swap(int *arr,int i,int j)
{
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
int partition(int *arr,int start,int end)
{
	int pivot=arr[(start+end)/2];
	int i =start-1;
	for (int j = 0; j <=end-1; j++)
	{
		if (arr[j]<=pivot)
		{
			i++;
			swap(arr,i,j);
		}
		swap(arr,i+1,end);
	}
	return i+1;
}
void quicksort(int *arr,int start,int end)
{
	if (start<end)
	{
	   int piv=partition(arr,start,end);
	   quicksort(arr,start,piv-1);
	   quicksort(arr,piv+1,end);
	}   
}
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
    quicksort(ans,0,ansize);
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