#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand( time(0) );
	
	int randNum=rand();
	cout<<"A random number: "<<randNum<<endl;
	return 0;
}

