#include<iostream>
using namespace std;

int sum( const int numbers[],const int numbersLen) {
int sum=0;
for(int i=0;i<numbersLen;++i)
{
	sum+=numbers[i];
}
return sum;
}

 
int main()
{
	int x[]={2,5,8,6};
	
	cout<<sum(x,4);
	return 0;
}
