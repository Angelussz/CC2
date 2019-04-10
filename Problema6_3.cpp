#include<iostream>
const int LEGTH=2;
const int WIDth=3;
using namespace std;
void transpose(int input[][LENGTH],int output[][WIDTH])
{
	for(int i=0;i<WIDTH;i++)
	{
		for(int j=0;j<LENGTH;j++)
		{
			output[j][i]=input[i][j];
		}
    }
    for(int z=0;z<3;z++)
	{
		for(int a=0;a<3;a++)
		{
			cout<<output[z][a];
		}
		cout<<endl;
    }
}
int main()
{
	int x[][LENGTH]={{2,4},{6,8},{7,9}};
	int y[LENGHT][WIDTH]={{0,0},{0,0},{0,0}};
	//const LEGTH =3;
	
	transpose(x,y);
}
