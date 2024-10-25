#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() 
{
    srand( time( NULL ) );
    const int x=6, y=10;
    int szachownica[x][y], parzyste=0, nieparzyste=0, liczba;

    for(int i=0;i<x;i++) 
	{
        for(int j=0;j<y;j++)
		 {
            liczba = rand()%90+10;
            szachownica[i][j] = liczba;
            if(liczba%2 == 0) 
			{
                parzyste++;
            } else
			 {
                nieparzyste++;
            }
        }
    }
    for(int i=0;i<y;i++) 
	{
        cout<<"-----";
    }
    cout<<"-"<<endl;
    for(int i=0;i<x;i++)
	 {
        cout<<"|";
        for(int j=0;j<y;j++)
		 {
            cout<<" "<< szachownica[i][j]<<" |";
        }
        cout<<endl;
        for(int k=0;k<y;k++)
		 {
            cout<<"-----";
        }
        cout<<"-"<<endl;
    }
    cout<<"Liczb parzystych: "<< parzyste<<endl;
    cout<<"Liczb nieparzystych: "<< nieparzyste<<endl;
    cout<<endl;
    cout<<"Nacisnij dowolny klawisz aby zamknac program"<<endl;
    return 0;
}
