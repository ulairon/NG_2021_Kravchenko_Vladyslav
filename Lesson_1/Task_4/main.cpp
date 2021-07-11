#include <iostream>

using namespace std;

int main()
{
    int ZP;
    cout << "Skazhite vashu zarplatu v $, pozhatusta: ";
    cin >> ZP;
    if (ZP<1000) { cout << "Rabotai bolshe!"; }
    if (1000000 > ZP > 999) { cout << "Kruto"; }
    if (ZP > 999999) { cout << "Da ti millioner"; }
    cout << ", no ti molodec!" << endl;
    return 0;
}
