#include<iostream>
#include<cstdlib>
#include<ctime>
#include<math.h>
//#define RAND_MAX 12
using namespace std;
int main()
{
	int dartsInCircle=0;
	const int ramax=100;
	int n;
	srand( time(0) );
	int num=rand();
	num=1+rand()%(100-1);
	cout<<"Number of darts: ";cin>>n;
	
	
	for(int i= 0; i<n; ++i) 
	{
		double x=num/(double)ramax, y=num/(double)ramax;
		
		if( sqrt(x*x + y*y) < 1 )
		{
			++dartsInCircle;
			//cout<<dartsInCircle<<endl;
		}
		//cout<<endl;
		//cout<<dartsInCircle<<endl;
	}
	cout<<dartsInCircle;
}
