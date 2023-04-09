#include<iostream>
using namespace std;
int main()
{
	int n, sum = 0;
	cout << "Enter any number" << endl;
	cin  >> n;
	while(n>0)
	{
		sum += n;
		cout << "Enter any number" << endl;
		cin  >> n;
		
	}
	cout << "Sum of the numbers you entered = " << sum;
}
