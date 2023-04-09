#include<iostream>
using namespace std;
void insertionsort(int arr[], int n) {
	int i, j, temp = 0;
	for(i=1; i<n; i++) {
		temp = arr[i];
		for(j=i-1; j>=0; j--) {
			if(arr[j] > temp) 
				arr[j+1] = arr[j];
			else
				break;
		}
		arr[j+1] = temp;
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
	cout << "Array before insertion sort" << endl;
	for(int i=0; i<n; i++) 
		cout << arr[i] << "	";
	cout << endl;
	insertionsort(arr, n);
	cout << "Array after insertion sort" <<"\n";
	for(int i=0; i<n; i++) 
		cout << arr[i] << "	";
	}
