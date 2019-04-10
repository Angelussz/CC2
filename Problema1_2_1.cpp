#include<iostream>
using namespace std;

void setString(char **strPtr)
{
    int x;
    cin>>x;
    if(x<0)
        **strPtr = "Negatives!";
    else 
        **strPtr = "Nonnegatives!";
} 
int main()
{
	char *str;
	setString(&str);
	cout<<str;
	return 0;
}
