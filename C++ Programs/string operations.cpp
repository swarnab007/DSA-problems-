#include<iostream>
using namespace std;
void reverse(char st[], int size)
{
	int s = 0, e = size - 1;
	while(s<e)
	{
		swap(st[s],st[e]);
		s++;
		e--;
	}
	cout << "Reversed String is " << st << endl;
}
	int length(char name[])
	{
		int i = 0, count = 0;
		while(name[i] != 0)
		{
			count++;
			i++;
		}
		return count;
	}
main()
{
	char name[20];
	cout << "Enter your Name" << endl;
	cin >> name;
	int ans = length(name);
	cout << "Length = " << ans << endl;
	reverse(name,ans);
}
