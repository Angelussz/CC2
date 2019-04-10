#include<iostream>
using namespace std;

int sum( const int x, const int y) {
return x + y;
}

double sum( const double x, const double y) {
 return x + y;
 }
 
int main()
{
	int x=4,y=3;
	
	double m=1.35,n=3.54;
	cout<< sum(x,y)<<endl;
	cout<<sum(m,n);
	return 0;
}
