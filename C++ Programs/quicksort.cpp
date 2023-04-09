#include<iostream>
using namespace std;
int partition(int arr[], int s, int e) {
	// find the pivot element
	int pivot = arr[s];
	// count elements less than pivot
	int cnt = 0;
	for(int i=s; i<=e; i++) {
		if(arr[i] < pivot)
			cnt++;
	}
	// set the right index for pivot
	int pivotindex = s + cnt;
	// place the pivot element in pivotindex
	swap(arr[pivotindex], arr[s]);
	// Place the smaller elements in the left and bigger elements in the right
	int i = s;
	int j = e;
	while(i < pivotindex && j > pivotindex) {
		while(arr[i] < pivot) 
			i++;
		while(arr[j] > pivot) 
			j--;
		swap(arr[i], arr[j]);
	}
	// return the pivotindex
	return pivotindex;
}
void quicksort(int arr[], int s, int e) {
	// Base case
	if(s >= e) 
		return;
	// Finding partion point
	int p = partition(arr, s, e);
	// sorting left part
	quicksort(arr, s, p-1);
	// sorting right part
	quicksort(arr, p+1, e);
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
	cout << "Array before quick sort" << endl;
	for(int i=0; i<n; i++) 
		cout << arr[i] << "	";
	cout << endl;
	quicksort(arr, 0, n-1);
	cout << "Array after quick sort" <<"\n";
	for(int i=0; i<n; i++) 
		cout << arr[i] << "	";
}
