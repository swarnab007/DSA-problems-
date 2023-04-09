#include<iostream>
using namespace std;
int fact(int n) {
	// Base Case
	if(n == 0) 
		return 1;
	// Recurrence Relation 
	return n * fact(n-1);
}
int main() {
	int n;
	cout << "Enter a number to find Factorial" << endl;
	cin >> n;
	int ans = fact(n);
	cout << "Factorial of " << n << " is " << ans << endl;
}
