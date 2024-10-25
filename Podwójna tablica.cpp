#include<iostream>
using namespace std;
int main()

{
 
int tab1[5]={1,2,3,4,5};
int tab2[5];
int tab3[5];

for(int i=0; i<5; i++)
{

	cout<<"podaj liczbe"<<endl;
	cout<<endl;
	cin>>tab2[i];
}

for (int i=0; i<5; i++)
{

	tab3[i]=tab1[i]+tab2[i];
	cout<<endl;
	cout<<tab3[i]<<endl;
}
}
