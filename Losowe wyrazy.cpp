#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int a;
	srand( time( NULL ) );
	
	a = rand ()%100;
	cout <<a<<endl;
	
	
}
