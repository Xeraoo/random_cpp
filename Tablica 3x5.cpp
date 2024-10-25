#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

	int sisi[10][6];
	
	int a;
	
	short x,y;
	
	srand(time(NULL));
	
	for(int i=0; i<0;i++)

	{
		
		a = rand()%100;
		cout<<a<<endl;
		
		sisi[x][y]=a;
	}
	
	for(int i=0; i<60; i++)
	{
		cout<<sisi[x][y];
		cout<<"Numer Liczby"<<endl;
		cout<< i+1<<endl;
		
	}

}


