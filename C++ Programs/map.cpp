#include<iostream>
#include<map>
using namespace std;
int main() {
	map<int, string> m;
	m.insert({2, "banerjee"});
	m.insert({19, "swarnab"});
	for(auto i:m) {
		cout << i.second << endl;
	}
}
