#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	int i, j, size, temp;
	cout << "Enter the Size of Array" << endl;
	cin >> size;
	for(i=0; i<size; i++)
	{
		cout << "Enter Element at Index " << i << endl;
		cin >> arr[i];
	}
	i = 0;
	j = size-1;
	while(i<=j)
	{
	swap(arr[i],arr[j]);
	i++;
	j--;
	}	
	cout << "Array after reversing is " << endl;
	for(i=0; i<size; i++)
	{
		cout << arr[i] << endl;
	}
}
