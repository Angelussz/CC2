#include<iostream>
#include<cstdlib>
#include<ctime>
#include<math.h>
//#define RAND_MAX 100
using namespace std;
double computePi ( const int n)
{
	srand ( time (0) );
	int dartsInCircle = 0;
	for(int i=0;i<n;++i)
	{
		double x = rand()/(double)RAND_MAX,y =rand()/(double) RAND_MAX;
		if( sqrt(x*x + y*y) < 1 )
		{
			++dartsInCircle;
			//cout<<dartsInCircle<<endl;
		}
		//cout<<endl;
		//cout<<dartsInCircle<<endl;
	}
	return dartsInCircle;
}
int main()
{
	int n;
	cout<<"numero? ";cin>>n;
	cout<<"dardos in:"<<computePi(n);
}

