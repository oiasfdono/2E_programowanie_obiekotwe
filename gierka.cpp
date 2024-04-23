#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

string literki(string PodaneSlowo)
{
	return string();
}

string zgadywanka(string WymieszaneSlowo, string PodaneSlowo)
{
	return string();
}

string literki(string PodaneSlowo);
string zgadywanka(string WymieszaneSlowo, string PodaneSlowo);
int powtorka();

int main()
{
	do
	{
		string const sslowo("C:/aaa/scores.txt");
		ofstream mojstrumien(sslowo.c_str());
		string slowo;

		if (mojstrumien)
		{
			cout << "slowo: ";
			cin >> slowo;
			mojstrumien << slowo << endl;
		}

		else
		{
			cout << "Plik nie dziala";
		}

		string wymiesanes = literki(slowo);
		zgadywanka(wymiesanes, slowo);
		mojstrumien.close();

	} while (powtorka() == 1);

	return 0;

}

string mieszaj(string PodaneSlowo)
{
	string wymiesanes;
	int pozycja(0);

	while (PodaneSlowo.size() != 0)
	{
		pozycja = rand() % PodaneSlowo.size();
		wymiesanes += PodaneSlowo[pozycja];
		PodaneSlowo.erase(pozycja, 1);

	}


	return wymiesanes;
}


string zgadywanie(string WymieszaneSlowo, string PodaneSlowo)
{
	string zgadywanes;
	int i = 1;

	do
	{
		cout << "Podaj poprawne slowo: " << WymieszaneSlowo << endl;
		cin >> zgadywanes;
		if (zgadywanes == PodaneSlowo)
		{
			cout << "Zgadles\n";


		}
		else
		{
			cout << "Nie zgadles\n";
			i++;
			if (i > 5)
			{
				cout << "Za duzo prob, przegrales\n";

			}
		}

	} while (zgadywanes != PodaneSlowo && i <= 5);


	return zgadywanes;
}





int powtorka()
{
	char TN;
	cout << "Czy chcesz zagrac jeszce raz: (t/n)   ";
	cin >> TN;
	if (TN == 't')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
