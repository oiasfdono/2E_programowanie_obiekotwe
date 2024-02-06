
#include <iostream>

int fib(int n)
{
	if (n <= 1)
		return n;
	else
		return fib(n - 1) + fib(n - 2);
}

int main()
{
	int n;
	std::cout << "Podaj numer n-tej liczby ci¹gu fibonacciego: ";
	std::cin >> n;
	std::cout << "Wartosc: " << n << "n-tej liczby ci¹gu to: " << fib(n) << std::endl;
	return 0;
}
