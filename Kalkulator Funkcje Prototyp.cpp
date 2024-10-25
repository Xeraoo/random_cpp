#include <iostream>
#include <conio.h>

using namespace std;

double dodaj(double a, double b)
{
	return a+b;
}

double odejmij(double a, double b)
{
	return a-b;
}

double pomnoz(double a, double b)
{
	return a*b;
}

double podziel(double a, double b)
{
	return a/b;
}

void menu()
{
	char wybor;
	double a,b;
	cout << "Wprowadz pierwsza liczbe: ";
	cin >> a;
	cout << "Wprowadz druga liczbe: ";
	cin >> b;
	system("cls");
	cout<<"Pierwsza liczba = "<<a<<endl; 
	cout<<"Druga liczba = "<<b<<endl;
	cout<<"Jaka operacje chcesz wykonac? Wcisnij odpowiednio klawisz:"<<endl; 
	cout<<"[1] Dla Dodawania,"<<endl;
	cout<<"[2] Dla Odejmowania,"<<endl;
	cout<<"[3] Dla Mnozenia,"<<endl;
	cout<<"[4] Dla Dzielenia."<<endl;
	wybor = _getch();
	system("cls");
	switch (wybor)
	{
		case '1':
			cout<<"Wynik dodawania liczb "<<a<<" + "<<b<<" = "<<dodaj(a, b)<<endl;
			break;

		case '2':
			cout<<"Wynik odejmowania liczb "<<a<<" - "<<b<<" = "<<odejmij(a, b)<<endl;
			break;

		case '3':
			cout<<"Wynik mnozenia liczb "<<a<<" * "<<b<<" = "<<pomnoz(a, b)<<endl;
			break;

		case '4':
			cout<<"Wynik dzielenia liczb "<<a<<" / "<<b<<" = "<<podziel(a, b)<<endl;
			break;

		default:
			system("cls");
			cout<<"Wcisnieto nieprawidlowy klawisz!"<<endl;
			_getch();
			system("cls");
			menu();
			break;
	}
}

int main()
{
	menu();
	_getch();
	return 0;
}
