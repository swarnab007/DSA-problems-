#include<iostream>
using namespace std;
int main()
{
	int a[4] = {1,2,3,4};
	int b[3] = {3,4,5};
	int i, j;
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			if(a[i] == b[j])
			{
				cout << a[i] << " ";
				break;
		}
	}
}
}
