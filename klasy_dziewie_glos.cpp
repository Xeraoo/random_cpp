#include <iostream>
#include <random>

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

enum class Glos {niema, mamy, taty, wlasny, sasiada};

class Dziecko : public Mama, public Tata {
    Glos _glos = Glos::niema;
	public:
		void ustaw_wiek( int w) {
			wiek = w;
		}
        void nadaj_glos() {
            random_device rnd;
            unsigned int szansa  = rnd();
            unsigned int prop = rnd.max()/3;
            if ( szansa < prop )
                _glos = Glos::mamy;
            else if (szansa > prop && szansa < prop*2)
                _glos = Glos::taty;
            else
                _glos = Glos::wlasny;
        }
        void glos() { 
            if ( _glos == Glos::niema ) 
                                nadaj_glos();

            if ( _glos == Glos::mamy )
                Mama::glos();
            else if ( _glos == Glos::taty )
                Tata::glos();
            else
               cout << "Własny glos" << endl; 
        };
};

class Dziecko2 : public Mama, public Tata {
    Glos _glos = Glos::niema;
	public:
        Dziecko2() {
            nadaj_glos();
        }
        Dziecko2(Glos g) {
            _glos = g;
        }
		void ustaw_wiek( int w) {
			wiek = w;
		}
        void nadaj_glos() {
            random_device rnd;
            unsigned int szansa  = rnd();
            unsigned int prop = rnd.max()/3;
            if ( szansa < prop )
                _glos = Glos::mamy;
            else if (szansa > prop && szansa < prop*2)
                _glos = Glos::taty;
            else
                _glos = Glos::wlasny;
        }
        void glos() { 
            if ( _glos == Glos::mamy )
                Mama::glos();
            else if ( _glos == Glos::taty )
                Tata::glos();
            else
               cout << "Własny glos" << endl; 
        };
};


int main() {
	cout << "Dziedziczenie wieloklasowe" << endl;

	Dziecko d;
    d.glos();
    Dziecko2 d2;
    d2.glos();
    Dziecko2 d3(Glos::wlasny);
    d3.glos();
}

// Dodaj opcję 4 glosu do klasy dziecko