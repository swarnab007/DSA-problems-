#include<iostream>
using namespace std;
int main()
{
	string s = {'My Name is Khan'};
	int i;
    char ch = 'A'-1;
	for(i=0; s[i]!='\0'; i++)
	{
		if(s[i] == ' ')
		{
			s[i] = ch;
		}
	}
	for(int i=0; s[i]!='\0'; i++)
	{
		cout << s[i];
	}
}
