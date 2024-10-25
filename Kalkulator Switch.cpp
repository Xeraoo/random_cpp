#include <iostream>
#include <cstdio>
using namespace std;
int main ()
{
	
short x,a,b;
float wynik;
cout<<"Wybierz dzialania"<<endl;
cout<<"Liczba 1 to suma"<<endl;
cout<<"liczba 2 to roznica"<<endl;
cout<<"Liczba 3 to iloczyn"<<endl;
cout<<"Liczba 4 to iloraz"<<endl;
cout<<"Liczba 5 to reszta z dzielenia"<<endl;
cin>>x;

switch (x)
                 {
                    case 1:
                        cout << "Podaj pierwsza liczbe: ";
                        cin >> a;
                        cout << "Podaj druga liczbe: ";
                        cin >> b;
                        cout << "Twoj wynik to : " << a + b << endl;
                        break;
 
                        case 2:
                            cout << "Podaj pierwsza liczbe: ";
                            cin >> a;
                            cout << "Podaj druga liczbe: ";
                            cin >> b;
                            cout << "Twoj wynik to: " << a - b << endl;
                            break;
 
                         case 3:
                         cout << "Podaj pierwsza liczbe: ";
                         cin >> a;
                         cout << "Podaj druga liczbe: ";
                         cin >> b;
                         cout << "Twoj wynik to: " << a * b << endl;
                         break;
 
                         case 4:
                         cout << "Podaj pierwsza liczbe: ";
                         cin >> a;
                         cout << "Podaj druga liczbe: ";
                         cin >> b;
                         cout << "Twoj wynik to: " << a / b << endl;
                         break; 
                         
                         case 5:
                         cout << "Podaj pierwsza liczbe: ";
                         cin >> a;
                         cout << "Podaj druga liczbe: ";
                         cin >> b;
                         cout << "Twoj wynik to: " << a % b << endl;
                         break; 

}

	system("Pause");

}

