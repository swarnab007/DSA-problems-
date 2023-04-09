#include<iostream>
using namespace std;
 int LinearSearch(int arr[],int size,int key)
 {
 	int i = 0;
 	if(size == 0)
 	{
 		return -1;	
	}
	if(arr[0] == key)
	{
		return i;
	}
	else
	{
		int remainingpart = LinearSearch(arr+1,size-1,key);
		return remainingpart;
	}
	i++;
 }
int main()
{
	int arr[5] = {3,2,5,1,6};
	int key = 6;
	int size = 5;
	int ans = LinearSearch(arr,size,key);
	if(ans == -1)
	cout << "Not Found" << endl;
	else
	cout << "At index " << ans << endl;
}
