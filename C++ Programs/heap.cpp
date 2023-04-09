#include<iostream>
using namespace std;
class heap {
	public :
	int arr[100];
	int size;
	heap() {
		arr[0] = -1;
		size = 0;
	}
	void insert(int val) {
		size++;
		int i = size;
		arr[i] = val;
		while(i > 1) {
			int parent = i/2;
			if(arr[parent] < arr[i]) {
				swap(arr[parent], arr[i]);
				i = parent;
			}
			else {
				return;
			}
		}
	}
	void deletefromheap() {
		// Step 1 : put the last element in first index
		arr[1] = arr[size];
		// Step 2 : Remove the last node
		size--;
		// Step 3 : Place root at its right position
		int i = 1;
		while(i <= size) {
			int leftNode = 2 * i;
			int rightNode = 2 * i + 1;
			if(leftNode <= size && arr[leftNode] > arr[i]) {
				swap(arr[i], arr[leftNode]);
				i = leftNode;
			}
			else if(rightNode <= size && arr[rightNode] > arr[i]) {
				swap(arr[i], arr[rightNode]);
				i = rightNode;
			}
			else {
				return;
			}
		} 
	}
	void print() {
		for(int i=1; i<=size; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
};
void heapify(int arr[], int n, int i) {
	int largest = i;
	int leftNode = 2 * i;
	int rightNode = 2 * i + 1;
	if(leftNode <= n && arr[leftNode] > arr[largest]) 
		largest = leftNode;
	if(rightNode <= n && arr[rightNode] > arr[largest]) 
		largest = rightNode;
	if(largest != i) {
		swap(arr[largest], arr[i]);
		heapify(arr, n, largest);
	}
	else {
		return;
	}
}
int main() {
	heap h1;
/*	cout << "After insertion in heap : " << " ";
	h1.insert(55);
	h1.insert(54);
	h1.insert(53);
	h1.insert(50);
	h1.insert(52);
	h1.print();
	cout << "After deletion in heap : " << " ";
	h1.deletefromheap();
	h1.print(); */
	int arr[100] = {-1, 54, 53, 55, 52, 50};
	int n = 5;
	cout << "Printing Array : " << " ";
	for(int i=1; i<=n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	for(int i=n/2; i>=1; i--) 
		heapify(arr, n, i);
	cout << "Printing Array after Heapify : " << " ";
	for(int i=1; i<=n; i++) {
		cout << arr[i] << " ";
	}
}
