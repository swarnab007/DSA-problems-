#include<iostream>
using namespace std;
int linearSearch(int arr[], int size, int key, int index) {
	if(size == 0)
		return -1;
	if(arr[index] == key)
		return index;
	else {
	int ans = linearSearch(arr, size--, key, index++);
	return ans;
	}
}
int main() {
	int n, key;
	cout << "Enter the Size" << endl;
	cin >> n;
	int arr[n];
	cout << "Enter the elements" << endl;
	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}
	cout << "Enter the Element to search" << endl;
	cin >> key;
	int index = 0;
	int ans = linearSearch(arr, n, key, index);
	if(ans != -1) 
		cout << "Found at index " << ans << endl;
	else
		cout << "Not found" << endl;
}
