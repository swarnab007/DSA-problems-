#include<iostream>
using namespace std;
int SumofArray(int arr[], int size)
{
	int sum = 0;
	if(size == 1)
	{
		sum = arr[0];
		return sum;
	}
	else
	{
		int remainingpart = SumofArray(arr+1,size-1);
		sum = arr[0] + remainingpart;
		return sum;
	}
}
int main()
{
	int arr[5] = {3,2,5,1,6};
	int sum = SumofArray(arr,5);
	cout << sum << endl;
}
