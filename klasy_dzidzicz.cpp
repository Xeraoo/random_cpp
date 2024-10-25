#include <iostream>
using namespace std;

class Pojazd {
	public:
		string nazwa;
		int kolka;
		char kolor;
		float wysokosc;
	void inicjalizuj(string naz, int kol, char klr, float wys) {
		nazwa = naz;
		kolka = kol;
		kolor = klr;
		wysokosc = wys;
	}
	void wyswietl() {
		cout << nazwa << " kolka: " << kolka << " kolor: " 
			<< kolor << " wys: " << wysokosc << endl;
	}
};

class Rower : public Pojazd {
	public:
		int przerzutki;
		void wyswietl() {
			cout << nazwa << " kolka: " << kolka << " kolor: " 
				<< kolor << " wys: " << wysokosc;
			cout << " przerzutki: "  << przerzutki << endl;

		}
};

class Samolot : public Pojazd {
	private:
		int skrzydla;
	public:
		void skrzyd(int s) { skrzydla = s; }
		int skrzyd() { return skrzydla; }
};

class Test : public Rower {};

int main() {
	cout << "Dziedziczenie" << endl;
	Pojazd poj;
	poj.inicjalizuj("samochod", 4, 'B', 2.1);
	poj.wyswietl();
	
	
	Rower r1;
	r1.inicjalizuj("Wigry",2 , 'Z', 1.2);
	r1.przerzutki = 5;
	r1.wyswietl();
	
	Test t1;
	t1.nazwa = "Test";
	t1.kolka = 0;
	t1.kolor = '0';
	t1.wysokosc = 0;
	t1.wyswietl();
	
	Samolot s1;
	//s1.skrzydla = 2;
	s1.skrzyd(2);
	cout << "Skrzydla: " << s1.skrzyd() << endl;
	s1.inicjalizuj("Mig", 0, 'S', 5.34);
	s1.wyswietl();
}