#include<iostream>
using namespace std;
int main()
{
	int arr[10], i, j, n, product = 1, newproduct = 1;
	cout << "Enter Size of Array" << endl;
	cin >> n;
	cout << "Taking Input" <<"\n";
	for(i=0; i<n; i++)
	cin >> arr[i];
	for(i=0; i<n; i++)
	{
		product = product * arr[i];
	}
	for(i=0; i<n; i++)
	{
		if(arr[i] != 0)
		{
			newproduct = product/arr[i];
			arr[i] = newproduct;
		}
		else
		{
			break;
		}
	}
	cout << "New Array is" << endl;
	for(i=0; i<n; i++)
	{
		cout << arr[i] << endl;
	}
}
