#include<iostream>
using namespace std;
void merge(int arr[], int s, int e) {
	int mid = (s + e) / 2;
	int len1 = mid - s + 1;
	int len2 = e - mid;
	int *first = new int[len1];
	int *second = new int[len2];
	int k = s;
	for(int i=0; i<len1; i++) {
		first[i] = arr[k++];
	}
	k = mid + 1;
	for(int i=0; i<len2; i++) {
		second[i] = arr[k++];
	}
	int i = 0;
	int j = 0;
	k = s;
	while(i<len1 && j<len2) {
		if(first[i] < second[j]) 
			arr[k++] = first[i++];
		else
			arr[k++] = second[j++];	
	}
	while(i < len1) {
		arr[k++] = first[i++];
	}
	while(j < len2) {
		arr[k++] = second[j++];
	}
}
void mergesort(int arr[], int s, int e) {
	if(s >= e) 
		return;
	int mid = (s + e) / 2;
	// left part to sort
	mergesort(arr, s, mid);
	// right part to sort
	mergesort(arr, mid+1, e);
	// merge
	merge(arr, s, e);
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
	cout << "Array before merge sort" << endl;
	for(int i=0; i<n; i++) 
		cout << arr[i] << "	";
	cout << endl;
	mergesort(arr, 0, n-1);
	cout << "Array after merge sort" <<"\n";
	for(int i=0; i<n; i++) 
		cout << arr[i] << "	";
}
