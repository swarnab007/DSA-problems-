#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int size, i;
	cout << "Enter Size of Array" << endl;
	cin >> size;
	cout << "Enter the Elements of Array" << endl;
	for(i=0; i<size; i++)
	{
		cin >> a[i];
	}
	cout << "New Array is" << endl;
	for(i=0; i<size; i=i+2)
	{
		if(i+1 < size)
		swap(a[i],a[i+1]);
	}
	for(i=0; i<size; i++)
	{
		cout << a[i] << "\t";
	}
}
