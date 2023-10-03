#include <iosteam>
#include <cmath>

using namespace std;

int main()
{
	int choice;
	cout << "Wybierz figurę do obliczenia pola:\n";
	cout << "1. Kwadrat\n";
	cout << "2. Trapez\n";
	cout << "3. Romb\n";
	cout << "4. Trójkąt\n";
	cin >> choice;

	double area;

	switch (choice)
	{
	case 1:
		double side;
		cout << "Podaj długość boku kwadratu: ";
		cin >> side;
		area = side * side;
		break;

	case 2:
		double bok1, bok2, wys;
		cout << "Podaj długość pierwszej podstawy trapezu: ";
		cin >> bok1;
		cout << "Podaj długość drugiej podstawy trapezu: ";
		cin >> bok2;
		cout << "Podaj wysokośc trapezu";
		cin >> wys;
		area = 0.5 * (bok1 + bok2) * wys;
		break;
	case 3:
		double bok1, bok2;
		cout << "Podaj długość pierwszej przekątnej: ";
		cin >> bok1;
		cout << "Podaj długość drugiej przekątnej: ";
		cin >> bok2;
		area = 0.5 * bok1 * bok2;
		break;
	case 4:
		double pod, wys;
		cout << "Podaj długość podstawy: ";
		cin >> pod;
		cout << "Podaj wysokość: ";
		cin >> wys;
		area = 0.5 * pod * wys;
		break;

		if (choice >= 4) {
		cout << "Błąd\n";
		return 0;
	}
		cout << "Pole: " << area << endl;

		return 0;
}