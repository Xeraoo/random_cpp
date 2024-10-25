#include <iostream>
#include <iomanip>

using namespace std;

int main() {

cout<<unitbuf;

cout<< setfill('*');

cout<< endl << setw(20) << right << dec << showpoint <<float(21370)<<endl<<endl;

cout<< setfill('#');

cout<< setw(30) << left << "Formatownie_Zadanie"<<endl<<endl;

cout<< setfill(char(96));

cout<< setw(40) << uppercase << hex << 45556 << endl<<endl;

cout<< setfill(' ');

cout << setbase(10);

cout<< 16 << " " << 1233 << " " << 144 << " ~dec "<<endl << endl; 

cout<< setbase(16);

cout<<nouppercase;

cout<< 16 << " " << 1233 << " " << 144 << " ~hex" <<endl << endl; 

cout << setbase(8);

cout<< 16 << " " << 1233 << " " << 144 << " ~oct"<<endl << endl; 

cout << setbase(10);

cout << setprecision(16);

cout<< 124.321312<< "  ~16 miejsc " <<endl << endl;

cout << setprecision(2);

cout<< 124.321312<< " ~2 miejsca" << endl << endl;

cout<< fixed;


cout<<nounitbuf;
}