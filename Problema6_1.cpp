#include<iostream>
using namespace std;
void printArray(const int arr[], const int len)
{
	for(int i=0;i<len;i++)
	{
		cout<<arr[i];
		if(i<len-1)
		{
			cout<<",";
		}
	}
}
int main()
{
	int x[]={5,9,3,1};
	printArray(x,4);
}
