#include <iostream>
using namespace std;

int main()
{
	int liczba;

	cout << "Wybierz liczbę od 1 do 30" << endl;
	cin >> liczba;



	switch (liczba)
	{
	case 1:
		cout << "Marka samochodu: Audi" << endl; break;
	case 2:
		cout << "Marka samochodu: BMW" << endl; break;
	case 3:
		cout << "Marka samochodu: Volkswagen" << endl; break;
	case 4:
		cout << "Marka samochodu: Fiat" << endl; break;
	case 5:
		cout << "Marka samochodu: Ford" << endl; break;
	case 6:
		cout << "Marka samochodu: Kia" << endl; break; 
	case 7:
		cout << "Marka samochodu: Opel" << endl; break;
	case 8:
		cout << "Marka samochodu: Mercedes" << endl; break;
	case 9:
		cout << "Marka samochodu: Volvo" << endl; break;
	case 10:
		cout << "Marka samochodu: Jeep" << endl; break;
	case 11:
		cout << "Marka samochodu: Subaru" << endl; break;
	case 12:
		cout << "Marka samochodu: Suzuki" << endl; break;
	case 13:
		cout << "Marka samochodu: Tesla" << endl; break;
	case 14:
		cout << "Marka samochodu: Lexus" << endl; break;
	case 15:
		cout << "Marka samochodu: Mazda" << endl; break;
	case 16:
		cout << "Marka samochodu: Honda" << endl; break;
	case 17:
		cout << "Marka samochodu: Lamborghini" << endl; break;
	case 18:
		cout << "Marka samochodu: Land Rover" << endl; break;
	case 19:
		cout << "Marka samochodu: Ferrari" << endl; break;
	case 20:
		cout << "Marka samochodu: DS" << endl; break;
	case 21:
		cout << "Marka samochodu: Dodge" << endl; break;
	case 22:
		cout << "Marka samochodu: Hyundai" << endl; break;
	case 23:
		cout << "Marka samochodu: Renault" << endl; break;
	case 24:
		cout << "Marka samochodu: Seat" << endl; break;
	case 25:
		cout << "Marka samochodu: Skoda" << endl; break;
	case 26:
		cout << "Marka samochodu: Toyota" << endl; break;
	case 27:
		cout << "Marka samochodu: Peugeot" << endl; break;
	case 28:
		cout << "Marka samochodu: Dacia" << endl; break;
	case 29:
		cout << "Marka samochodu: Citroen" << endl; break;
	case 30:
		cout << "Marka samochodu: Nissan" << endl; break;
	}
	if (liczba >= 30)
	{
		cout << "Błąd: Wybrano niepoprawną liczbę" << endl;
	 
	}


	return 0;
}