#include <iostream>

using namespace std;

int main() {

cout << (5==5) << endl;

cout << ((5!=5) && (10==2)) << endl;

cout << ((5>7) ? "prawda" : "fałsz") << endl;

cout << ((6<9) ? "prawda" : "fałsz") << endl;

cout << ((5 != 5) && (10<=2) ? "prawda" : "fałsz") << endl;

cout << ((6 != 12) && (1<=16) ? "prawda" : "fałsz") << endl;

cout << ((5 != 7) && (1123<=16) ? "prawda" : "fałsz") << endl;

cout << ((5 != 7) && (12<=16) || (14> 15)? "prawda" : "fałsz") << endl;

cout << ((10==10) || (10>=3) ? "prawda" : "fałsz") << endl;

cout << ((3<4) && (4<10) ? "prawda" : "fałsz") << endl;

cout << ((5<4) || (1==1) && (4<10) ? "prawda" : "fałsz") << endl;

cout << (((5<4) || (1==1)) && (4<10) ? "prawda" : "fałsz") << endl;

cout << ((3+(2*2) == 10) ? "prawda" : "fałsz") << endl;

cout << ((((3+2)*2) == 10) ? "prawda" : "fałsz") << endl;

cout << ((2+(2*2) == 8) ? "prawda" : "fałsz") << endl;

cout << ((((2+2)*2) == 8) ? "prawda" : "fałsz") << endl;

cout << ((((3+2)*2) == 10) ? "prawda" : "fałsz") << endl;

cout << ((5 == 5) && (100<1) || (3!=2)  ? "prawda" : "fałsz") << endl;

cout << ((5 == 5) && ((100<1) || (3!=2))  ? "prawda" : "fałsz") << endl;

cout << (((5 == 4) && (100<1)) || (3!=2)  ? "prawda" : "fałsz") << endl;

}