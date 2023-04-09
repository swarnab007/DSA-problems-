#include<iostream>
using namespace std;
int toUppercase(char str)
{
	if(str >= 'A' && str <= 'Z')
	{
		return str;
	}
	else
	{
		char temp = str - 'a' + 'A';
		return temp;
	}
}
int findlength(char str[])
{
	int count = 0, i = 0;
	while(str[i] != '\0')
	{
		count++;
		i++;
	}
	return count;
}
int main()
{
	char str[10];
	int flag = 0;
	cout << "Enter a String" << endl;
	cin >> str;
	int len = findlength(str);
	cout << "Length of String = " << len << endl;
	int s = 0, e = len - 1;
	while(s < e)
	{
		if(toUppercase(str[s]) != toUppercase(str[e]))
		{
			cout << "Not Palindrome" << endl;
			break;
		}
		else
		{
			s++;
			e--;
			flag = 1;
		}
	}
	if(flag == 1)
	{
		cout << "Palindrome" << endl;
	}
}
