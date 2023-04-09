#include<iostream>
using namespace std;
void sayDigits(int n, string arr[]) {
	// Base Case
	if(n == 0) {
		return;
	}
	// Processing
	int digit = n % 10;
	n = n / 10;
	// Recurrence Relation
	sayDigits(n, arr);
	// Printing digit corresponding number while returning from function call stack
	cout << arr[digit] << " ";
}
int main() {
	int n;
	cout << "Enter a number" << endl;
	cin >> n;
	string arr[10] = {"ZERO", "ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE"}; 
	sayDigits(n, arr);
	cout << endl;
}
