#include<iostream>
using namespace std;
void towerofHanoi(int n, char source, char helper, char dest) {
	// Base Case
	if(n == 1) {
		cout << "Move " << n << " disk from " << source << " to " << dest << endl;
		return;
	}
	// move n-1 disk from source to helper using dest
	towerofHanoi(n-1, source, dest, helper);
	cout << "Move " << n << " disk from " << source << " to " << dest << endl;
	// move n-1 disk from helper to dest using source
	towerofHanoi(n-1, helper, source, dest);
}
int main() {
	int n;
	cout << "Enter number of Disks" << endl;
	cin >> n;
	towerofHanoi(n, 'S', 'H', 'D');
}
