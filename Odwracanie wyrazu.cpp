#include<iostream>
using namespace std;
string ReverseCaption(string wyraz)
{
	string pom = wyraz;
	for(int i=0; i<wyraz.size();i++)
	{
		pom[i]=wyraz[wyraz.size()-1-i];
	}
	return pom;
}
int main()
{
	string napis="hello";
	cout<<ReverseCaption(napis);
}
