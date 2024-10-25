#include<iostream>
using namespace std;
int main()
{
	int max;
	int min;
	int tab[10];
	int a;
	for (int i=0; i<10; i++)
	{
		cin>>a;
		tab[i]=a;
		cout<<"Element tabeli "<<tab[i]<<endl;
	}
	max=tab[0];
	min=tab[0];
	for(int i=1; i<10; i++)
	{
		if(tab[i]>max)
		max=tab[i];
		
		if(tab[i]<min)
		min=tab[i];
	}
	cout<<"Najmniejsza wartosc to "<<min<<" Najwieksza wartosc to "<<max<<endl;
}
