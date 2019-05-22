#include<iostream>
using namespace std;
void MultiplicationTable(int tab[][10])
{
	for(int i=1;i<=10;i++)
	{
		for(int j=1;j<=10;j++)
		{
			tab[i][j]=i*j;
		}
	}
}
void wypisz(int tab[][10])
{
	for(int i=1;i<=10;i++)
	{
		for(int j=1;j<=10;j++)
		{
			cout<<tab[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	int tab[10][10];
	MultiplicationTable(tab);
	wypisz(tab);
	return 0;
}
