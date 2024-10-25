#include<iostream>
using namespace std;
int main()
{
	int temp;
	int tab[10]={6,7,55,34,87,23,45,26,79,22};
	for (int i=0; i<9; i++)
	{
		for (int i=0; i<9; i++)
		{
			if (tab[i]>tab[i+1])
			{
			temp = tab [i];
			tab[i]= tab[i+1];
			tab[i+1]=temp;
			}
		}
		for (int i=0; i<10; i++)
		{
			cout<<tab[i]<<endl;
		}
	}
}
