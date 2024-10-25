#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin>>a;
	cin>>b;
	while (b!=0)
	{
		c=a%b;
		a=b;
		b=c;
	}
	cout<<"NWD wynosi "<<a<<endl;
}
