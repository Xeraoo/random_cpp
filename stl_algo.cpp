// Użyj kilku wybranych przez siebie algorytmów (min. 5) na dowolnych kontenerach


#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <random>
using namespace std;

void wyswietl(int a) {
    //cout << "Wywołuję wyświetl " << endl;
    cout << a << " ";
}

void modyfikuj(int& a) {
    a = a + 1;
}

int cztery() {
    return 4;
}

int losuj() {
    random_device rnd;
    return rnd() % 10;
}

int potega2(int a) {
     return a*a;
}

void wyswietl2(pair<int, int> para) {
    int klucz = para.first;
    int wartosc = para.second;
    cout << "Klucz: " << klucz << " War: " << wartosc << endl;
}

void wyswietl3(int klucz, int wartosc) {
    cout << "Klucz: " << klucz << " War: " << wartosc << endl;
}

template <typename it, typename funk>
void map_each(it first, it last, funk f) {
    for (; first!=last; ++first)
        f(first->first, first->second);
}


int main() {
    cout << "Algorytmy" << endl;
    
    vector<int> v = { 4,9,2,5,8,3,112,6,12 };
    
    for_each(v.begin(), v.end(), wyswietl); cout << endl;
    for_each(v.begin(), v.end(), modyfikuj);
    for_each(v.begin(), v.end(), wyswietl); cout << endl;
    
    vector<int> k1(v.size());
    copy(v.begin(), v.end(), k1.begin());
    for_each(k1.begin(), k1.end(), wyswietl); cout << endl;
    
    vector<int> k2;
    copy(v.begin(), v.end(), inserter(k2, k2.begin()));
    for_each(k2.begin(), k2.end(), wyswietl); cout << endl;
    
    fill(k2.begin(), k2.end(), 84);
    for_each(k2.begin(), k2.end(), wyswietl); cout << endl;
    
    generate(k1.begin(), k1.end(), cztery);
    for_each(k1.begin(), k1.end(), wyswietl); cout << endl;
    
    generate(k1.begin(), k1.end(), losuj);
    for_each(k1.begin(), k1.end(), wyswietl); cout << endl;
    
    auto poz = find(v.begin(), v.end(), 4);
    cout << "Pozycja wartosci 4: " << poz-v.begin() << endl;
    
    vector<int> wyn(k1.size());
    transform(k1.begin(), k1.end(), wyn.begin(), potega2);
    for_each(wyn.begin(), wyn.end(), wyswietl); cout << endl;
    
    map<int, int> m = { {3,6} , {9, 2}, {12, 6}, {1, 4} };
    for_each(m.begin(), m.end(), wyswietl2);
    map_each(m.begin(), m.end(), wyswietl3);
    
}