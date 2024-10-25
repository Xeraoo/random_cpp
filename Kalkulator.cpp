#include <iostream>
#include <conio.h>
#include <cstdlib>

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


double menu()
{
	char wybor;
	double a,b;
	cout<<"Jaka operacje chcesz wykonac?"<<endl;
	cout<<"Wcisnij odpowiednio klawisz:"<<endl; 
	cout<<endl;
	cout<<"[1] Dla Dodawania,"<<endl;
	cout<<"[2] Dla Odejmowania,"<<endl;
	cout<<"[3] Dla Mnozenia,"<<endl;
	cout<<"[4] Dla Dzielenia."<<endl;
	cout<<"[5] Dla zamkniecia programu."<<endl;
	wybor = _getch();
	system("cls");
	cout << "Wprowadz pierwsza liczbe: ";
	cin >> a;
	cout << "Wprowadz druga liczbe: ";
	cin >> b;
	system("cls");
	cout<<"Pierwsza liczba = "<<a<<endl; 
	cout<<"Druga liczba = "<<b<<endl;

	switch (wybor)
	{
		case '1':
			cout<<"Wynik dodawania liczb "<<a<<" + "<<b<<" = "<<dodaj(a, b)<<endl;
			cout<<"[1] Powtorzyc prgram"<<endl;
			cout<<"[0] Zamknij program"<<endl;
			break;

		case '2':
			
			cout<<"Wynik odejmowania liczb "<<a<<" - "<<b<<" = "<<odejmij(a, b)<<endl;
			cout<<"[1] Powtorzyc prgram"<<endl;
			cout<<"[0] Zamknij program"<<endl;
			break;

		case '3':
			cout<<"Wynik mnozenia liczb "<<a<<" * "<<b<<" = "<<pomnoz(a, b)<<endl;
			cout<<"[1] Powtorzyc prgram"<<endl;
			cout<<"[0] Zamknij program"<<endl;
			break;

		case '4':
			cout<<"Wynik dzielenia liczb "<<a<<" / "<<b<<" = "<<podziel(a, b)<<endl;
			cout<<"[1] Powtorzyc prgram"<<endl;
			cout<<"[0] Zamknij program"<<endl;
			break;
			
		case '5':
			cout<<"Do Widzenia"<<endl;
			return 0;
			
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
