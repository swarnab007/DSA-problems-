#include<iostream>
using namespace std;
void reverseString(string &s, int i, int j) {
/*	cout << "call received for " << s << endl;
	cout << "Position of start index is " << s[i] << endl;
	cout << "Position of end index is " << s[j] << endl;
	cout << endl;	*/
	// Base Case
	if(i > j) 
		return;
	// swapping arr[i] and arr[j]
	swap(s[i], s[j]);
	// incrementing i and decrementing j and Recursive call
	reverseString(s, i+1, j-1);
}
int main() {
	string s = "abcde";
	int n = s.length();
	reverseString(s, 0, n-1);
	cout << "New string after reverse is "<< s << endl;
}
