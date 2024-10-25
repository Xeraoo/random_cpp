#include <iostream>
#include <vector>
#include <random>
using namespace std;

template <typename Typ>
void print(Typ &x){
    cout << "Wektor: " ;
    for (auto v : x) 
        cout << v << ' ';
    cout << endl;
}

class Punkt {
    public:
        int _x, _y, _z;
        Punkt(int x, int y, int z) : _x(x), _y(y), _z(z) {}
        void show() {
            cout << "X: " << _x << " Y: " << _y << " Z: " << _z << endl;
        }
};

int main() {
    cout << "Wektor" << endl;
    //int tablica1[50]; //tradycyjna tablica zbędna
    
    vector<int> v = {5, 7, 3, 9, 2, 4};
    cout << "Rozmiar: " << v.size() << endl;
    
    for(int i=0; i<v.size(); i=i+1) {
        cout << v[i] << " ";
    }
    cout << endl;
    
    for(int i=0; i<v.size(); i=i+1) {
        cout << v.at(i) << " ";
    }
    cout << endl;

    for(int i : v)
        cout << i << " ";
    cout << endl;
    
    for( auto it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
    cout << endl;
    
    v.push_back(6);
    v.push_back(10);
    v.push_back(16);
    cout << "Po push_back: " << v.size() << endl;
    print(v);
    
    cout << "Pierwszy: " << v.front();
    cout << " Ostatni: " << v.back() << endl;
   
    v.insert(v.begin()+4, 30);
    print(v);
    
    v.erase(v.begin()+5);   // v.pop_back() == v.erase(v.end())
    print(v);
    
    v.clear();
    print(v);
    
    int count = 50;
    random_device rnd;
    while (count > 0) {
        v.push_back(rnd()%100);
        count=count-1;
    }
    print(v);
    cout << "Rozmiar wektora: "<< v.size() << endl;
    
    vector<Punkt> vp;
    vp.push_back(Punkt(10, 24, 12));
    vp.push_back(Punkt(12, 43, 22));
    vp.push_back(Punkt(16, 10, 33));
    
    for (auto v : vp) 
        v.show();
    
}