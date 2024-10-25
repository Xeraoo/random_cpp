#include <iostream>
#include <sstream>
using namespace std;

int main() {
    cout << "SS2" << endl;
    
    stringstream bufor;
    
    bufor << "Ola ma";
    bufor << " kota";
    
    cout << "Zawarość bufora: " << bufor.str() << endl;
    
    string s1, s2, s3;
    bufor >> s1 >> s2 >> s3;
    
    cout << "Ze zmiennych: " << s1 << s2 << s3 << endl;
    
    string ciag;
    bufor.seekg(0);
    while ( !bufor.eof() ) {
            bufor >> ciag;
            cout << ciag << endl;
    }
    
    bufor.clear();
    bufor << " a Ala ma psa" ;

    while ( !bufor.eof() ) {
            bufor >> ciag;
            cout << "I1: " << ciag << endl;
    }
    
    bufor.seekg(10);
    while ( !bufor.eof() ) {
            bufor >> ciag;
            cout << "I2: " << ciag << endl;
    }

    bufor.seekg(0);
    
    bufor >> ciag;
    while ( bufor ) {
            cout << "I3: " << ciag << endl;
            bufor >> ciag;
    }
    
    
}