#include <iostream>
#include <iomanip>
#include <bitset>

using namespace std;

int main() {
	
cout<< "Bitwise"<<endl<<endl;

typedef unsigned char bajt;

bajt b1 = 0b10011010;
bajt b2 = 0b11101101;
bajt wynikAND;
bajt wynikOR;
bajt wynikXOR;
bajt wynikLEFTSHIFT;
bajt wynikRIGHTSHIFT;
bajt wynikBitwiseNOT1;
bajt wynikBitwiseNOT2;

cout<< "1. " << int(b1) << "  2." << int(b2) << endl<<endl;

wynikAND = b1 & b2;
cout<< "Bity AND: " << bitset<8>(wynikAND) <<endl;

wynikOR = b1 | b2;
cout<< "Bity OR: " << bitset<8>(wynikOR) <<endl;

wynikXOR = b1 ^ b2;
cout<< "Bity XOR: " << bitset<8>(wynikXOR) <<endl;

wynikLEFTSHIFT = b1 << b2;
cout<< "Bity Left Shift: " << bitset<8>(wynikLEFTSHIFT) <<endl;

wynikRIGHTSHIFT = b1 >> b2;
cout<< "Bity Right Shift: " << bitset<8>(wynikRIGHTSHIFT) <<endl;

wynikBitwiseNOT1 = (~ b1);
cout<< "Bity Bitwise NOT bajt 1 : " << bitset<8>(wynikBitwiseNOT1) <<endl;

wynikBitwiseNOT2 = (~ b2);
cout<< "Bity Bitwise NOT bajt 2 : " << bitset<8>(wynikBitwiseNOT2) <<endl;
}