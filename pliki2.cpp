#include <iostream>
#include <fstream>
using namespace std;

int main() {
    cout << "Pliki2" << endl;
    
    fstream plik;
    
    plik.open("calkowite.txt", ios::out);
    plik << "6736 77856 767465 874673 1764378 447673 674673";
    plik.close();
    
    int liczba;
    int suma = 0;
    plik.open("calkowite.txt", ios::in);
    
    while (!plik.eof()) {
        plik >> liczba;
        cout << liczba << " typ: " << typeid(liczba).name() << endl;
        suma = suma+liczba;
    }
    cout << "Suma : " << suma << endl;
    plik.close();
    
    plik.open("zmiennop.txt", ios::out);
    plik << "34.234 53.234 435.45636 23.343 654.283 3.1415";
    plik.close();
    
    float liczf;
    plik.open("zmiennop.txt", ios::in);
    cout.precision(8);
    while (!plik.eof()) {
        plik >> liczf;
        cout << liczf << " typ: " << typeid(liczba).name() << endl;
    }
    plik.close();
        
}