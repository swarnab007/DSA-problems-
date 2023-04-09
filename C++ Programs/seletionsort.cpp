#include<iostream>
using namespace std;
void selectionsort(int arr[], int n) {
	int minindex = 0;
	for(int i=0; i<n-1; i++) {
		minindex = i;
		for(int j=i+1; j<n; j++) {
			if(arr[j] < arr[minindex]) 
				minindex = j;
		}
		swap(arr[minindex], arr[i]);
	}
}
int main() {
	// 9 11 8 10 2
	int n;
	cout << "Enter the size of array" << endl;
	cin >> n;
	int arr[n];
	cout << "Enter the elements of array" << endl;
	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}
	cout << "Array before selection sort" << endl;
	for(int i=0; i<n; i++) 
		cout << arr[i] << "	";
	cout << endl;
	selectionsort(arr, n);
	cout << "Array after selection sort" <<"\n";
	for(int i=0; i<n; i++) 
		cout << arr[i] << "	";
}
