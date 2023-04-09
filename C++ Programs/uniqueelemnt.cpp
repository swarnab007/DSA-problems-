#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int size, i, j, flag = 0;
	cout << "Enter Size of Array" << endl;
	cin >> size;
	cout << "Enter the Elements of Array" << endl;
	for(i=0; i<size; i++)
	{
		cin >> a[i];
	}
	for(i=0; i<size; i++)
	{
		for(j=i+1; j<size; j++)
		{
			if(a[i] != a[j])
			{
			flag = 1;
			break;
		    }
		}
	}
	if(flag == 1)
	{
		cout << "Unique Element is " << a[i];
	}
}
