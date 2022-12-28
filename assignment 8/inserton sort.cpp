/*
	Insertion Sort Algorithm
	**Time Complexity: Worst case:O(n^2)
					   Best case: O(n)
					   Average case: O(nlogn)
	**Space Complexity: O(1) //no additional space is required
*/
#include <bits/stdc++.h>
using namespace std;
 
//a function that will print the vector passed to it, elements seprated by space
void printVector(vector<int>A)
{
	//traverse all the element and print them
	for(int i=0;i<A.size();i++)
	{
		cout<<A[i]<<" ";	
	}
	cout<<"\n";
}
 
//the vector A will be sorted inplace and that's why passed with refrence
void sort(vector<int>&A)
{
	//write the code for insertion sort
    for (int i = 1; i <=A.size()-1; i++)
    {
        /* code */
         int min_element=A[i];
         int j=i-1;
         while (j >= 0 && A[j] > min_element)
        {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = min_element;
    }
}
int main() {
	vector<int>A= {6,1,2,3,4,6,1};
	// your code goes here
	sort(A);
	cout<<"sorted vector: ";
	printVector(A);
 
	return 0;
}