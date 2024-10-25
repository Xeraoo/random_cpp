#include <iostream>
using namespace std;

class Nasza {
	public:
		int a;
		char l;
		float f;
		Nasza(int licz, char lit, float zm) {
			cout << "Uruchamiam K: 3arg" << endl;
			a = licz; l = lit; f = zm;
		}
		~Nasza() {
			cout << "Destruktor: usuwam obiekt" << endl;
		}
	
};


int main() {
	cout << "Konstruktory" << endl;
	/*
	Nasza ob;

	ob.a = 7; ob.l = 'D'; ob.f = 3.14;
	cout << ob.a << " " << ob.l <<" "<<ob.f << endl;
	Nasza ob2;
	cout << ob2.a << " " << ob2.l <<" "<<ob2.f << endl;
	*/
	Nasza ob3(5, 'E', 1.54);
	cout << ob3.a << " " << ob3.l <<" "<<ob3.f << endl;
}
