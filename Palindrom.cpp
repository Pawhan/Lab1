#include<iostream>
using namespace std;
bool IsPalindrome(string wyraz)
{
	bool t;
	string pom = wyraz;
	for(int i=0; i<wyraz.size();i++)
	{
		pom[i]=wyraz[wyraz.size()-1-i];
	}
	for(int i=0; i<wyraz.size();i++)
	{
		if(pom[i] == wyraz[i])
		{
			t=true;
		}
		else
		{
			t=true;
			break;
		}
	}
	return t;
}
int main()
{
	string wyraz="kajak";
	cout<<IsPalindrome(wyraz);
}
