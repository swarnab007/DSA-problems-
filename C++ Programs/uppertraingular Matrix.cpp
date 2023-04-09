#include<iostream>
using namespace std;
int main()
{
	int arr[3][3];
	int i, j;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cout << "Enter the " << "("<< i << "," << j << ")" <<" Elemets of Matrix" <<endl; 
			cin >> arr[i][j];
		}
	}
	cout << "Printed Array is" << endl;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			if(j>=i)
			cout << " " << arr[i][j] << " ";
		}
		cout << endl;
	}
}

