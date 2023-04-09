#include<iostream>
using namespace std;
void selectionSort(int arr[], int n, int i) {
	int minindex = i;
	// Base Case
	if(i == n - 1)
		return;
	for(int j=i+1; j<n; j++) {
		if(arr[j] < arr[minindex]) 
			minindex = j;
	}
	swap(arr[minindex], arr[i]);
	selectionSort(arr, n, i+1);
}
int main() {
	// 9 11 8 10 2
	int n;
	cout << "Enter the size of Array" << endl;
	cin >> n;
	int arr[n];
	cout << "Enter the elements in Array" << endl;
	for(int i=0; i<n; i++) 
		cin >> arr[i];
	cout << "Array before Selection sort" << endl;
	for(int i=0; i<n; i++) 
		cout << arr[i] << " ";
	cout << endl << endl;
	selectionSort(arr, n, 0);
	cout << "Array after Selection sort" << endl;
	for(int i=0; i<n; i++) 
		cout << arr[i] << " ";
	cout << endl << endl;
}
