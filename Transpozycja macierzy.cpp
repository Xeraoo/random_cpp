#include<iostream>
using namespace std;

int main()
{

	int tab[4][5]

	cout<<"Przed transpozycj¹:\n ";

	for(int i=0;i<4;i++)
	{
		for(int j=0;j<5;j++)
		{
			//wygenerowanie liczb z zakresu [-9; 9]
			tab[i][j]=rand()%19-9; 
			//wyœwietlenie wylosowanej liczby
			cout<<tab[i][j]<<" "; 
		}
		cout<<endl;
	}

	//transpozycja macierzy
	cout<<"Po transpozycji: "<<endl;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<4;j++)
			cout<<tab[j][i]<<" ";
			
	cout<<endl;
	}

	system("pause");
	return 0;
