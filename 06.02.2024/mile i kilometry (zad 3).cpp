#include <iostream>

double zmianka(double mila)
{
	const double mila_na_km = 1.609;
	return mila * mila_na_km;
}

int main()
{
	double mila;
	std::cout << "Podaj odleg³oœæ w milach; ";
	std::cin >> mila;
	
	double km = zmianka(mila);
	std::cout << "odleglosc w km: " << km << std::endl;

	return 0;
}