#include <iostream>
#include <iomanip>
#include <bitset>

using namespace std;

int main() {
	
int t[5];

cout<<endl<< "Wartości liczbowa z stosu: "<<endl;
cout<< t[0] << " " <<t[1] << " " <<t[2] << t[3] << t[4]<<endl;
cout<< "Rozmiar: " << sizeof(t) << " " <<endl;


char losowe[] = {};
cout<<endl<< "Wartości char z stosu: "<<endl;
cout<< losowe <<endl;
cout<< "Rozmiar: " << sizeof(losowe) << " " <<endl;


cout<< endl<< "Tablica  zainicjalizowana: "<<endl;

int tablica[3];
tablica[0] = 10;
tablica[1] = 21;
tablica[2] = 37;	
cout<< tablica[0] << " " <<tablica[1] << " " <<tablica[2] <<endl;
cout<< "Rozmiar: " << sizeof(tablica) << " " <<endl;


cout<< endl<< "Tabela float "<<endl;
float f[] = {2.6, 1.8, 3.0, 4.0, 5.0, 12.15, 1635.123};
cout<< f[0] << " " << f[1] << " " << f[2] << " " << f[3] << " " << f[4] << " " << f[5] << " " << f[6] <<endl;
cout<< "Rozmiar: " << sizeof(f) << " " <<endl;


cout<< endl<< "Wartości tabeli char znak1 "<<endl;
char znak[] = {'T', '4', 'b', '$', 0};
cout<< znak[0] << " " << znak[1] << " " << znak[2] << " " << znak[3]<< endl;
cout<< "Rozmiar: " << sizeof(znak) << endl;


cout<< endl<< "Wartości tabeli char znak2 "<< " " <<endl;
char znak2[] = "#Zadanie: Zainicjalizuj i przeprowadz operacje na kilku wlasnych tablicach roznych typow, a nastepnie wyswietl ich wyniki.";
cout<< endl << znak2<<endl; 
cout<< "Rozmiar: " << sizeof(znak2) << " " <<endl;

cout<< endl<< "Wartości tabeli char znak3  "<<endl;
char znak3[] = {'T', '4', 'b', '$'};
cout<< znak3[0] << " " << znak3[1] << " " << znak3[2] << " " << znak3[3]<< endl;
cout<< "Rozmiar: " << sizeof(znak3) << endl;

}