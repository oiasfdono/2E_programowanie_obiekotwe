#include <iostream>

using namespace std;

 int main()
 {
cout << "liczba 1";
double liczba1;
cout << "liczba 2";
double liczba2;
cout << "znak operatora";
cout << "1 aby dodac"
cout << "2 aby odjac"
cout << "3 aby mnozyc"
cout << "4 aby dzielic"
cout << "0 aby zakonczyc"
char znak_operatora;
cout << "wynik";
double wynik;

cin >> liczba1 >> znak_operatora >> liczba2;
if(znak_operatora == '1');
{
    wynik = liczba1 + liczba2;
}
if(znak_operatora == '2');
{
    wynik = liczba1 - liczba2;
}
if(znak_operatora == '3');
{
    wynik = liczba1 * liczba2;
}
if(znak_operatora == '4');
{
    wynik = liczba1 / liczba2;
}
if(znak_operatora == '0');
{
    return 0;
}
 }
