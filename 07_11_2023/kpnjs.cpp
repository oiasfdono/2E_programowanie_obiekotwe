#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));

    int komp;
    int gracz;

    while (true) {
        std::cout << "Wybierz swoj ruch:" << endl;
        std::cout << "1. Kamien" << endl;
        std::cout << "2. Papier" << endl;
        std::cout << "3. Nozyce" << endl;
        std::cout << "4. Jaszczurka" << endl;
        std::cout << "5. Spock" << endl;
        std::cout << "0. Wyjscie" << endl;
        std::cin >> gracz;

        if (komp == 0) {
            cout << "Koniec gry. Dzieki za gre!" << endl;
            break;
        }
        else if (gracz < 1 || gracz > 5) {
            std::cout << "Nieprawidlowy wybor. Wybierz liczbe od 1 do 5." << endl;
            continue;
        }

        komp = rand() % 5 + 1;

        std::cout << "Komputer wybral: " << komp << endl;
        std::cout << "Ty wybrales: " << gracz << endl;

        if (gracz == komp) {
            std::cout << "Remis!" << endl;
        }
        else if ((gracz == 1 && (komp == 3 || komp == 4)) ||
            (gracz == 2 && (komp == 1 || komp == 5)) ||
            (gracz == 3 && (komp == 2 || komp == 4)) ||
            (gracz == 4 && (komp == 2 || komp == 5)) ||
            (gracz == 5 && (komp == 1 || komp == 3))) {
            std::cout << "Wygrales!" << endl;
        }
        else {
            std::cout << "Przegrales!" << endl;
        }
    }

    return 0;
}
