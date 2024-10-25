#include <iostream>
using namespace std;
int main ()

{
	
	long a,b;
	float c,d,e;
	
	do
	
	{
		cout<<"Podaj skale poczatkowa"<<endl;
		cout<<"[1] Skala Celsjusza"<<endl;
		cout<<"[2] Skala Fahrenheita"<<endl;
		cout<<"[3] Skala Kelvina"<<endl;
		cin>>a;
		cout<<"Podaj temperature"<<endl;
		cin>>c;
		
	
		switch (a)
		
		{
			case 1:
			
				d=c*9/5+32;
				cout<<"Stopnie w Skali Fahrenheita ";
				cout<<d<<endl;
				e=c+273.15;
				cout<<"Stopnie w Skali Kelvina ";
				cout<<e<<endl;
				cout<<"[1] Powtorzyc program"<<endl;
				cout<<"[0] Zamknij program"<<endl;
				cin>>b;
				break;
				
				case 2:
				
				d=(c-32)*5/9;
				cout<<"Stopnie w Skali Celsjusza ";
				cout<<d<<endl;
				e=(c-32)*5/9*273.15;
				cout<<"Stopnie w skali Kelvina ";
				cout<<2<<endl;
				cout<<"[1] Powtorzyc prgram"<<endl;
				cout<<"[0] Zamknij program"<<endl;
				cin>>b;
				break;
				
				case 3:
				
				d=c-273.15;
				cout<<"Stopnie w skali Celsjusza ";
				cout<<d<<endl;
				e=9/5*(c-273.15)+32;
				cout<<"Stopnie w Skali Fahrenheita ";
				cout<<e<<endl;
				cout<<"[1] Powtorzyc program"<<endl;
				cout<<"[0] Zamknij program"<<endl;
				cin>>b;
				break;
				
		}
		
	}
	while (b==1);
	
	return 0;
	
}
