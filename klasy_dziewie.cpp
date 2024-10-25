#include <iostream>
using namespace std;

class Mama {
	protected:
		int wiek;
	public:
		string buty;
		void glos() { cout << "Cienki " <<  endl; }
};

class Tata {
	string hobby;
	public:
		int konto;
		void glos() { cout << "Gruby " <<  endl; }
};

class Dziecko : public Mama, public Tata {
	public:
		void nadaj_glos() {};
		void ustaw_wiek( int w) {
			wiek = w;
		}
};


int main() {
	cout << "Dziedziczenie wieloklasowe" << endl;
	Mama m; m.glos(); Tata t; t.glos();	
	Dziecko d;
	d.nadaj_glos();
	d.ustaw_wiek(7);
	d.buty = "kapcie";
	d.konto = 100;
	d.Mama::glos();
	d.Tata::glos();
	
}


// Rozbuduj klasę dziecko o metodę króra przy urodzeniu rozwiąże 
// niezdecydowany głos