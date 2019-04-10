#include<iostream>
using namespace std;

int sum( const int numbers[],const int numbersLen) {
return numbersLen==0 ? 0:numbers[0]+sum(numbers+1,numbersLen-1);
}

 
int main()
{
	int x[]={2,5,8,6};
	
	cout<<sum(x,4);
	return 0;
}
