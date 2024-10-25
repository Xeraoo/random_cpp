#include <iostream>
#include <random>

using namespace std;

int main() {
    cout << "losowe" << endl;
    
    random_device rnd;
    
    for (int i = 0 ; i < 10 ; i++ )
        cout << rnd() % 10 << endl;
}