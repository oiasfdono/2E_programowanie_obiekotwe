#include <iostream>
#include <string>

using namespace std;

int bytesToBits(int bytes) {
    return bytes * 8;
}

int bitsToBytes(int bits) {
    return bits / 8;
}

double bytesToKilobytes(int bytes) {
    return bytes / 1024.0;
}

int kilobytesToBytes(double kilobytes) {
    return kilobytes * 1024;
}

double kilobytesToMegabytes(double kilobytes) {
    return kilobytes / 1024.0;
}

double megabytesToKilobytes(double megabytes) {
    return megabytes * 1024.0;
}

double megabytesToGigabytes(double megabytes) {
    return megabytes / 1024.0;
}

double gigabytesToMegabytes(double gigabytes) {
    return gigabytes * 1024.0;
}


double gigabytesToTerabytes(double gigabytes) {
    return gigabytes / 1024.0;
}


double terabytesToGigabytes(double terabytes) {
    return terabytes * 1024.0;
}

int main() {
    double size;
    string unitFrom, unitTo;

    cout << "Podaj wielkoœæ: ";
    cin >> size;
    cout << "Podaj jednostkê (bit, B, KB, MB, GB, TB): ";
    cin >> unitFrom;
    cout << "Podaj jednostkê, na któr¹ chcesz przekonwertowaæ (bit, B, KB, MB, GB, TB): ";
    cin >> unitTo;

    double result;

    if (unitFrom == "bit" && unitTo == "B")
        result = bitsToBytes(size);
    else if (unitFrom == "B" && unitTo == "bit")
        result = bytesToBits(size);
    else if (unitFrom == "B" && unitTo == "KB")
        result = bytesToKilobytes(size);
    else if (unitFrom == "KB" && unitTo == "B")
        result = kilobytesToBytes(size);
    else if (unitFrom == "KB" && unitTo == "MB")
        result = kilobytesToMegabytes(size);
    else if (unitFrom == "MB" && unitTo == "KB")
        result = megabytesToKilobytes(size);
    else if (unitFrom == "MB" && unitTo == "GB")
        result = megabytesToGigabytes(size);
    else if (unitFrom == "GB" && unitTo == "MB")
        result = gigabytesToMegabytes(size);
    else if (unitFrom == "GB" && unitTo == "TB")
        result = gigabytesToTerabytes(size);
    else if (unitFrom == "TB" && unitTo == "GB")
        result = terabytesToGigabytes(size);
    else
        cout << "Niepoprawne jednostki." << endl;

    cout << "Wynik: " << result << " " << unitTo << endl;

    return 0;
}
