#include <iostream>
#include <string>

using namespace std;
class Nowa {
	//private: // opcjonalne
		char _litera; // mLitera, m_litera
		int _liczba;
		string _ciag;
	public:
		Nowa(char lt, int lb, string ciag)
			:_litera(lt),
			 _liczba(lb),
			 _ciag(ciag)
			 { cout << "Inicjalizacja listą" << endl; }
		/*
		Nowa(char lt, int lb, string ciag) { 
			cout << "Inicjalizacja tradycyjna" << endl; 
			_litera = lt;
			_liczba = lb;
			_ciag = ciag;

		}
		*/
		void sprawdz() {
			cout << "Lit: " << _litera << endl;
			cout << "Licz: " << _liczba << endl;
			cout << "Ciag: " << _ciag << endl;
		}
};

int main() {
	cout << "Konstr listy init" << endl;
	Nowa o('K', 75, "Ala");
	// o._litera = 'g'; // źle bo _litera jest prywatna
	o.sprawdz();
	
}