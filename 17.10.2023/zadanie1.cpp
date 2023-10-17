#include <iostream>
#include <string>

int main()
{
	const std::string prawidlowyLogin = "twój login";
	const std::string prawidloweHaslo = "twoje haslo";
	int iloscProb = 3;

	while (iloscProb > 0)
	{
		std::string wprowadzonyLogin, wprowadzoneHaslo;

		std::cout << "Podaj login: ";
		std::cin >> wprowadzonyLogin;
		std::cout << "Podaj haslo: ";
		std::cin >> wprowadzoneHaslo;
		if (wprowadzonyLogin == prawidlowyLogin && wprowadzoneHaslo == prawidloweHaslo)
		{
			std::cout << "Zalogowano pomyslnie" << std::endl;
			break;
		}
		else
		{
			iloscProb--;
			std::cout << "Błędny login lub hasło. Pozostało prób: " << iloscProb << std::endl;

			if (iloscProb == 0)
			{
				std::cout << "Zablokowano możliwość logowania." << std::endl;
			}
		}
	}
	return 0;
}