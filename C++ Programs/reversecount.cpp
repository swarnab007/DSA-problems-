#include<iostream>
using namespace std;
void reverse(int n) {
	// Base Case
	if(n == 0) 
		return;
	// cout << n << " ";
	reverse(n-1);
	cout << n << " ";
}
int main() {
	int n;
	cout << "Enter the number" << endl;
	cin >> n;
	reverse(n);
}
