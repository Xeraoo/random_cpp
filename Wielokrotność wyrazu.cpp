#include<iostream>
using namespace std;
int main()
{
	string x;
	short y;
	
	cout<<"Podaj znak"<<endl;
	cin>>x;
	cout<<"Ile razy ma sie pokazac"<<endl;
	cin>>y;
	
	for (int i=1; i<=y; i++)
	{
		cout<<x<<endl;
	}
}
