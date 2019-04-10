#include<iostream>
using namespace std;
void reverse(int numbers[], const int numbersLen)
{
	for(int i=0;i<numbersLen/2;i++)
	{
		int tmp=*(numbers+i);//5
		int indexFromEnd= numbersLen - i - 1;
		*(numbers+i)= *(numbers+indexFromEnd);
		*(numbers+indexFromEnd)=tmp;
    }
    for(int j=0;j<numbersLen;j++)
	{
		cout<<numbers[j];
	}
}
int main()
{
	int x[]={5,9,3,1};
	reverse(x,4);
}
