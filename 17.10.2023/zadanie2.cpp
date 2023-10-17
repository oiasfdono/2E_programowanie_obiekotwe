#include <iostream>

int main()
{
	int liczba;
	int iloczyn = 1;

	std::cout << "Podaj liczby (0 kończy program): ";
	while (true)
	{
		std::cin >> liczba;

		if (liczba == 0)
		{
			break;
		}
		if (liczba % 2 == 0)
		{
			iloczyn *= liczba;
		}
		else

		{
			std::cout << "To nie jest liczba parzsta. Podaj inną liczbę: ";
		}
	}
	std::cout << "Iloczyn liczb parzystych: " << iloczyn << std::endl;
	return 0;
}