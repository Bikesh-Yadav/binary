#include<iostream>
using namespace std;

int binary(int);
int main()
{
	int n,dec;
	cout<<"enter decimal number"<<endl;
	cin>>dec;
	cout<<"the binary digits of "<<dec<<" is: "<<endl;
	binary(dec);
}

int binary(int n)
{
	if(n>0)
	{
		binary(n/2);
		cout<<n%2;
	}
}
