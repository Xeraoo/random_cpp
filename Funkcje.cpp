#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std; 

double dodaj(double a, double b)   //Funkcja odpowiedzialna za dodawanie
{
	return a+b;
}

double odejmij(double a, double b) //Funkcja odpowiedzialna za odejmowanie
{
	return a-b;
}

double pomnoz(double a, double b) //Funkcja odpowiedzialna za mnozenie
{
	return a*b;
}

double podziel(double a, double b) //Funkcja odpowiedzialna za dzielenie
{
	return a/b;
}


int menu() //Funkcja menu
{
	system("cls");
	int x;
	int wybor;
	double a,b;
	cout<<"Jaka operacje chcesz wykonac?"<<endl;
	cout<<"Wcisnij odpowiednio klawisz:"<<endl; 
	cout<<endl;
	cout<<"[1] Dla Dodawania,"<<endl;              // Menu wyboru dzialania
	cout<<"[2] Dla Odejmowania,"<<endl;  
	cout<<"[3] Dla Mnozenia,"<<endl;
	cout<<"[4] Dla Dzielenia,"<<endl;
	cout<<"[5] Dla zamkniecia programu,"<<endl;
	wybor = _getch();
	system("cls");

	switch (wybor)
	{
		case '1': // Wprowadz zmienne potrzebne do wykonania  dzialania
			cout << "Wprowadz pierwsza liczbe: ";
			cin >> a;
			cout << "Wprowadz druga liczbe: ";
			cin >> b;
			system("cls");
			cout<<"Pierwsza liczba = "<<a<<endl; 
			cout<<"Druga liczba = "<<b<<endl;
			cout<<"Wynik dodawania liczb "<<a<<" + "<<b<<" = "<<dodaj(a, b)<<endl; //Wynik dzialania
			cout<<"[Liczba inna niz 0] Powtorzyc prgram"<<endl; 
			cout<<"[0] Zamknij program"<<endl;
			cin>>x;
			switch (x) //Menu wyboru po dokonanym obliczeniu
			{
				case 1:
					menu();
					break;
				case 0:
					cout<<"Do Widzenia!"<<endl;
					break;
				default:
					menu();
					break;
			}
			break;

		case '2': // Wprowadz zmienne potrzebne do wykonania  dzialania
			cout << "Wprowadz pierwsza liczbe: ";
			cin >> a;
			cout << "Wprowadz druga liczbe: ";
			cin >> b;
			system("cls");
			cout<<"Pierwsza liczba = "<<a<<endl; 
			cout<<"Druga liczba = "<<b<<endl;
			cout<<"Wynik odejmowania liczb "<<a<<" - "<<b<<" = "<<odejmij(a, b)<<endl; //Wynik dzialania
			cout<<"[Liczba inna niz 0] Powtorzyc prgram"<<endl; 
			cout<<"[0] Zamknij program"<<endl;
			cin>>x;
			switch (x) //Menu wyboru po dokonanym obliczeniu
			{
				case 1:
					menu();
					break;
				case 0:
					cout<<"Do Widzenia!"<<endl;
					break;
				default:
					menu();
					break;
			}
			break;

		case '3': // Wprowadz zmienne potrzebne do wykonania  dzialania
			cout << "Wprowadz pierwsza liczbe: ";
			cin >> a;
			cout << "Wprowadz druga liczbe: ";
			cin >> b;
			system("cls");
			cout<<"Pierwsza liczba = "<<a<<endl; 
			cout<<"Druga liczba = "<<b<<endl;
			cout<<"Wynik mnozenia liczb "<<a<<" * "<<b<<" = "<<pomnoz(a, b)<<endl; //Wynik dzialania
			cout<<"[Liczba inna niz 0] Powtorzyc prgram"<<endl; 
			cout<<"[0] Zamknij program"<<endl;
			cin>>x;
			switch (x) //Menu wyboru po dokonanym obliczeniu
			{
				case 1:
					menu();
					break;
				case 0:
					cout<<"Do Widzenia!"<<endl;
					break;
				default:
					menu();
					break;
			}
			break;

		case '4': // Wprowadz zmienne potrzebne do wykonania  dzialania
			cout << "Wprowadz pierwsza liczbe: ";
			cin >> a;
			cout << "Wprowadz druga liczbe: ";
			cin >> b;
			system("cls");
			if (b==0) //Dzielenie przez 0
			{
					cout<<"Nie mozna dzielic przez 0!."<<endl; //Blad
					cout<<"[Liczba inna niz 0] Powtorzyc prgram"<<endl; 
					cout<<"[0] Zamknij program"<<endl;
					cin>>x;
					switch (x) //Menu wyboru po dokonanym obliczeniu
					{
						case 1:
						menu();
						break;
						
						case 0:
						cout<<"Do Widzenia!"<<endl;
						break;
						
						default:
						menu();
						break;
					}
						break;
			}
		
			else
			{
				cout<<"Pierwsza liczba = "<<a<<endl; 
				cout<<"Druga liczba = "<<b<<endl;
				cout<<"Wynik dzielenia liczb "<<a<<" / "<<b<<" = "<<podziel(a, b)<<endl; //Wynik dzialania
				cout<<"[Liczba inna niz 0] Powtorzyc prgram"<<endl; 
				cout<<"[0] Zamknij program"<<endl;
				cin>>x;
					switch (x) //Menu wyboru po dokonanym obliczeniu
					{
						case 1:
						menu();
						break;
						
						case 0:
						cout<<"Do Widzenia!"<<endl;
						break;
						
						default:
						menu();
						break;
					}
						break;
			}
			
		case '5': // Opcja zamkni�cia programu
			cout<<"Do Widzenia!"<<endl;
			break;
			
		default: //Komenda wyswietlania po wyborze zlego klawisza
			system("cls");
			cout<<"Wcisnieto nieprawidlowy klawisz!"<<endl;
			_getch();
			system("cls");
			menu();
			break;


	}
	

}
int main() //Funkcja main odsylajaca do menu 
{
	menu();
	_getch();
	return 0;
}
