#include<iostream>
using namespace std;
void swap (int *x,int *y)
{
	int tmp=*x;
	*x=*y;
	*y=tmp;
}
int main()
{
	//char *x[]={5,9,3,1};
	int x=4,y=6;
	swap(&x,&y);
}
