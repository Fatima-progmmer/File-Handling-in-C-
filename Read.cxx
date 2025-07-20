#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string Tanoo;
	ifstream Fatima("Tanzeela.txt");
	while (getline(Fatima,Tanoo))
	{
		cout << Tanoo ;
	}
	return 0;
}