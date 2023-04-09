#include<iostream>
using namespace std;
int binarysearch(int arr[], int s, int e, int key) {
	while(s <= e) {
		// Finding mid 
		int mid = (s + e) / 2;
		// if equals with key return it
		if(arr[mid] == key) 
			return mid;
		// go to the right part
		else if(key > arr[mid])
			s = mid + 1;
		// go to the left part
		else
			e = mid - 1;
	}
	// otherwise return -1
	return -1;
} 
int main() {
	// 5 6 8 10 12 14
	int n, key;
	cout << "Enter the size of Array" << endl;
	cin >> n;
	int arr[n];
	cout << "Enter the elements of Array in sorted order" << endl;
	for(int i=0; i<n; i++) 
		cin >> arr[i];
	cout << "Enter the element to search" << endl;
	cin >> key;
	int ans = binarysearch(arr, 0, n-1, key);
	if(ans == -1)
		cout << "The Element " << key << " is not present" << endl;
	else
		cout << "The Element " << key << " is present in " << ans + 1 << " th index";
}
