#include<iostream>
using namespace std;
bool checkPalindrome(string &s, int i, int j) {
	// Base case
	if(i > j) 
		return true;
	// comparing s[i] with s[j]
	if(s[i] != s[j]) 
		return false;
	// incrementing i
	i++;
	// decrementing j
	j--;
	return checkPalindrome(s, i, j);
}
int main() {
	string s = "abbccbba";
	int n = s.length();
	bool isPalindrome = checkPalindrome(s, 0, n-1);
	if(isPalindrome) 
		cout << "Palindrome" << endl;
	else 
		cout << "Not Palindrome" << endl;
}
