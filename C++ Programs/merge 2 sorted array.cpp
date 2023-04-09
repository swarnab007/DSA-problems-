#include<iostream>
using namespace std;
int main()
{
	int m = 5, n = 3, i, j, k;
	int arr1[m] = {1,3,5,9,10};
	int arr2[n] = {6,7,15};
	int arr3[m+n];
	for(i=0; i<m; i++)
	{
		arr3[k] = arr1[i];
	}
	for(i=m-1; i<m+n; i++)
	{
		for(j=0; j<n; j++)
		arr3[k] = arr2[j];	
	}
	for(i=1; i<m+n; i++)
	{
		for(j=0; j<(m+n)-i; j++)
		{
			if(arr3[j+1] < arr3[j])
			swap(arr3[j+1],arr3[j]);
		}
	}
	for(i=0; i<m+n; i++)
	{
		cout << arr3[i] << endl;
	}
}
