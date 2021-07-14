#include <iostream>

using namespace std;

int main()
{
    int ZP;
    cout << "Skazhite vashu zarplatu v $, pozhatusta: ";
    cin >> ZP;
    if (ZP > 999999) { cout << "Da ti millioner"; }
     if (ZP > 999) {
        if (ZP < 1000000){ cout << "Kruto"; }
    }
    if (ZP<1000) { cout << "Rabotai bolshe!"; }
   
    cout << ", no ti molodec!" << endl;
    return 0;
}
