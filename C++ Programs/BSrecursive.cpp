#include<iostream>
using namespace std;
int binarySearch(int arr[], int s, int e, int k) {
	int mid = (s + e) / 2;
	// Base Case
	// element not found
	if(s > e) 
		return -1;
	// element found
	if(arr[mid] == k) {
		return mid;
	}
	// go to right part
	else if(arr[mid] < k) {
		int ans = binarySearch(arr, mid+1, e, k);
		return ans;
	}
	// go to left part
	else {
		int ans = binarySearch(arr, s, mid-1, k);
		return ans;
	}
}
int main() {
	// 2 4 6 10 14 16
	int n, key;
	cout << "Enter Array Size" << endl;
	cin >> n;
	int arr[n];
	cout << "Enter elements in sorted order" << endl;
	for(int i=0; i<n; i++) 
		cin >> arr[i];
	cout << "Enter the Element to search" << endl;
	cin >> key;
	int index = binarySearch(arr, 0, n-1, key);
	if(index == -1) 
		cout << "Not Found" << endl;
	else 
		cout << "Found at index " << index+1 << endl;
}
