#include<iostream>
using namespace std;

void printNTimes(char *msg,int n)
{
	for (int i=0;i<n;i++)
	{
		cout<<msg<<endl;
	}
}
int main()
{
	//char *msg="sdfdsf";
	int n;
	cin>>n;
	printNTimes("Alberto",n);
	return 0;
}
