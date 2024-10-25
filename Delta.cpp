#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a, b, c, x0, x1, x2, delta;
	cout<<"Podaj parametra 'a':"<<endl;
	cin>>a;
	cout<<"Podaj parametr 'b':"<<endl;
	cin>>b;
	cout<<"Podaj parametr 'c':"<<endl;
	cin>>c;
	delta=(b)^2-4*a*c;
	if (delta>=0)
	{
		if (delta==0)
		{
			x0=-b/2*a;
			cout<<"Funkcja posiada jeden pierwiastek o wartosci "<<x0<<endl;
		}
		else x1=(-b-sqrt(delta))/2*a; x2=(-b+sqrt(delta))/2*a;
		cout<<"Funkcja posiada dwa pierwiastki o wartosci "<<x1<<" oraz "<<x2<<endl;
	}
	else
	cout<<"Funkcja nie posiada pierwiastkow"<<endl;
	return 0;
}
