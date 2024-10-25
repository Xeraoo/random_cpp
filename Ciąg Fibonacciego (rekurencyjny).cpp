#include<iostream>
using namespace std;
int fibon(int a)
{
	if (a==0) return 0;
	if (a==1 || a==2) return 1;
	if (a>2) return fibon(a-1)+fibon(a-2);
}
int main()
{
	int b;
	cout<<"Podaj numer wyrazu"<<endl;
	cin>>b;
	cout<<"Wartosc wyrazu: "<<fibon(b)<<endl;
}
