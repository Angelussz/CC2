#include<iostream>
using namespace std;

int sum( const int x, const int y,const int z) {
return x + y+z;
}

double sum( const double x, const double y, const double z) {
 return x + y+z;
 }
 
int main()
{
	int x=4,y=3,z=8;
	
	double m=1.35,n=3.54,b=4.42;
	cout<< sum(x,y,z)<<endl;
	cout<<sum(m,n,b);
	return 0;
}
