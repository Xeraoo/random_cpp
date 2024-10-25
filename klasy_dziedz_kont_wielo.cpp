#include <iostream>
using namespace std;

class Nasza1 {
	int _a;
	public:
		Nasza1 ( int a ) { _a = a; }
};
class Nasza2 {
	int _b;
	public:
		Nasza2 ( int a ) { _b = a; }
};

class Pochodna : public Nasza1, public Nasza2 {
	public:
		//using Nasza1::Nasza1;
		Pochodna() : Nasza1(10), Nasza2(7) 
				{ cout << "Bez argumentów" << endl;}
		Pochodna(int z) : Nasza1(z), Nasza2(z) 
				{ cout << "Z jednym " << endl; }
		Pochodna(int c, int d) 
			: 	Nasza1(c),
				Nasza2(d)
			{	cout << " z dwoma argumetami" << endl; }
		
};

int main() {
	cout << "Dziedziczenie z konstr. wieloklasowe" << endl;
	// Nasza1 n1(0); //	Nasza2 n2(1);
	Pochodna op;
	Pochodna op1(12, 4);
	Pochodna op2(30);
}
