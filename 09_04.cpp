#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	char zadanie[100];

	fstream plik1("plik.txt", ios::in | ios::out | ios::trunc);
	cout << "Podaj tekst: " << endl;
	cin.getline(zadanie, 100, '\n');
	plik1 << zadanie;
	plik1.close();

	system("PAUSE");
	EXIT_SUCCESS;
}
