#include <iostream>
#include <map>

using namespace std;


int main() {
    cout << "Kontener map" << endl;
    
    map<string,int> m = { {"Kot", 10} , {"Pies", 12} };
    m["Mysz"] = 8;
    m["Krowa"] = 15;
    cout << "Rozmiar mapy: " << m.size() << endl;
    
    for(map<string, int>::iterator it = m.begin(); it!=m.end(); it++) {
        cout << "Klucz: " << it->first;
        cout << " Wartość: " << it->second << endl;
    }
    
    m["Pies"] = 16;
    for( auto para : m){
        cout << "klucz: " << para.first;
        cout << " wart: " << para.second << endl;
    }
    
    cout << "Wartośc dla Mysz: " << m.at("Mysz") << endl;
    m.erase("Kot");
    for( auto [klucz, wartosc] : m) {
        cout << "Klucz: "<< klucz << " Wart: " << wartosc << endl;
    }
    
    // if (m.contains("Krowa"))                     // wymaga flagi -std=c++20
    //    cout << "m Zawiera Krowa: " << endl;
    
    cout << "Find: " << m.find("Krowa")->second << endl;
    
    m.clear();
    cout << "Rozmiar po clear: " << m.size() << endl;
}