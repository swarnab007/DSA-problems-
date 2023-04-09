#include<iostream>
using namespace std;
main()
{
	string s;
	cout << "Enter any String" << endl;
	cin >> s;
	char ch;
	int num[26] = {0};
	int arr[26] = {0};
	for(int i=0; i<s.length(); i++)
	{
		ch = s[i];
		int number = ch - 'a';
		arr[number]++;
	}
	int i=0;
	while(i<s.length())
	{
		if(arr[i] > 1)
		{
			num[i] = ch + 'a';
			num[i++] = arr[i];
			i = i+2;
		}
		else
		{
			num[i] = ch + 'a';
			i++;
		}
	}
	cout << "New Array is ";
	for(int i=0; i<s.length(); i++)
	{
		cout << num[i] << "\t";
	}
}
