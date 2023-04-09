#include<iostream>
using namespace std;
int main()
{
	int a, b;
	float c;
	cout << "Enter two numbers" << endl;
	cin >> a >> b;
	char op;
	cout << "Enter any Operation You want to Perform" << endl;
	cin >> op;
	switch(op)
	{
		case '+':
			cout << a+b << endl;
			break;
		case '-':
			cout << a-b << endl;
			break;
		case '*':
			cout << a*b << endl;
			break;
		case '/':
			c =(float)a/b;
			cout << c << endl;
			break;
		default:
			cout << "Please Enter Other Operations" << endl;
			break;
	}
	
}
