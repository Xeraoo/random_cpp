#include <iostream>
#include <fstream>
using namespace std;

int main() {
    cout << "Pliki1" << endl;
    
    fstream plik;
    string ciag;
    
    plik.open("plik_testowy.txt", ios::out);
    plik << "Napis testowy pierwszy" << endl;
    plik.close();
    
    plik.open("plik_testowy.txt", ios::in);
    plik >> ciag;
    while ( plik ) {
        cout << ciag << " | ";
        plik >> ciag;
    }
    plik.close();
    cout << endl;
    
    plik.open("plik_testowy.txt", ios::app);
    plik << "Jakis inny napis" << endl;
    plik << "Jeszcze Jakis inny napis" << endl;
    plik.close();
    
    plik.open("plik_testowy.txt", ios::in);
    while (!plik.eof()) {
        getline(plik, ciag);
        cout << "Getline : "<<ciag << endl;
    }
    plik.close();
    
    
}