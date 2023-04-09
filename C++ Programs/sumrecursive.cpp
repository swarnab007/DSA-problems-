#include<iostream>
using namespace std;
int getSum(int arr[], int n) {
	// Base Case
	if(n == 0) 
		return 0;
	if(n == 1)
		return arr[0];
	int remainingpart = getSum(arr+1, n--);
	int sum = arr[0] + remainingpart;
	return sum;
}
int main() {
	int n;
	cout << "Enter the size of Array" << endl;
	cin >> n;
	int arr[n];
	cout << "Enter Array Elements" << endl;
	for(int i=0; i<n; i++)
		cin >> arr[i];
	int sum = getSum(arr, n);
	cout << "Sum is " << sum;
}
