#include <iostream>
#include <fstream>
#include <filesystem>

using namespace std;

int main() {
    cout << "binarne" << endl;
    
    fstream plik;
    
    int wartosc = 11259375;
    cout << hex << "Wart hex: " << wartosc << endl;
    plik.open("calkowita.bin", ios::out | ios::binary);
    plik.write( (char*)(&wartosc), 4);
    plik.close();
    
    char wczyt[4];
    
    plik.open("calkowita.bin", ios::in | ios::binary);
    plik.read( wczyt, 4);
    plik.close();
    
    cout << wczyt << endl;
    int* pwynik = (int*)wczyt;
    int wynik = *pwynik;
    cout << "Wynik pod adresem: " << pwynik << " " << wynik << endl;
    cout << "Adres wczyt: " << (int*)wczyt;

    int dlugosc = filesystem::file_size("binarne.cpp");
    plik.open("binarne.cpp", ios::in | ios:: binary);
    /*
    plik.seekg(0, plik.end);
    int dlugosc = plik.tellg();
    plik.seekg(0, plik.beg);
    */
    
    char bufor[dlugosc+1];
    plik.read( bufor, dlugosc);
    plik.close();
    bufor[dlugosc] = 0; // '\0'
    cout << bufor << endl;

}
