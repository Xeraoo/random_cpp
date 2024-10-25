#include <iostream>
using namespace std;

class Pojazd {
    public:
        string kolor;
        int kolka;
        float wymiary[3];
        void trab() { cout << " BRRRRRR " << endl; }
        void zmien_kolka(int k) {
            if (k < 0) {
                cout << "za mało kółek" << endl;
            }
            else if ( k > 18) {
                cout << "za dużo kółek" << endl;
            }
            else kolka = k;  
        }
        int ile_kolek() { return kolka; }
        void zmien_wymiary(float, float, float);
        
};

enum { wys, dlug, szer };

void Pojazd::zmien_wymiary(float w, float d, float s) {
    wymiary[wys] = w;
    wymiary[dlug] = d;
    wymiary[szer] = s;
}

int main() {
    cout << "Klasy" << endl;
    
    Pojazd p1;
    
    p1.kolor = "zielony";
    p1.kolka = 4;
    p1.wymiary[wys] = 1.5;
    p1.wymiary[dlug] = 3.2;
    p1.wymiary[szer] = 2.1;
    
    cout << "Pojazd1 kolor: " << p1.kolor <<endl;
    cout << "Pojazd1 kółka: " << p1.kolka <<endl;
    cout << "Pojazd1 wys: " << p1.wymiary[wys] <<endl;
    cout << "Pojazd1 dlug: " << p1.wymiary[dlug] <<endl;
    cout << "Pojazd1 szer: " << p1.wymiary[szer] <<endl;
    
    Pojazd p2;
    p2.kolor = "czerwony";
    cout << "Pojazd2 kolor: " << p2.kolor <<endl;
    cout << "Pojazd1 kolor: " << p1.kolor <<endl;
    
    p1.trab();
    p2.trab();
    
    p1.zmien_kolka(20);
    p2.zmien_kolka(-10);
    
    cout << "Kołka P1: " << p1.ile_kolek() << endl;
    cout << "Kołka P2: " << p2.ile_kolek() << endl;
    
    p2.zmien_wymiary(3.2, 3.1, 2.3);
    cout << "Wymiary P2: " << p2.wymiary[wys] << " " 
        << p2.wymiary[dlug] << " " << p2.wymiary[szer] << endl;
}