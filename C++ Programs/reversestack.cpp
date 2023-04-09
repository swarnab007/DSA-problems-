#include<iostream>
#include<stack>
using namespace std;
int main() 
{
string str = "swarnab";
stack <char> s;

// Copying elements from string str to Stack s
for(int i=0; i<str.size(); i++) {
	char ch = str[i];
	s.push(ch);
}
string ans = "";

// Storing Poped elemnts and pushing them into ans
while(!s.empty()) {
	char ch = s.top();
	s.pop();
	ans.push_back(ch);
}
cout << endl;
cout << "Reversed String is " << ans << endl;
}
