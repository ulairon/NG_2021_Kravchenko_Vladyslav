#include <iostream>

using namespace std;

int main()
{
    int Zarplata;

    cout << "Skazhite vashu zarplatu v $, pozhatusta: ";
    cin >> Zarplata;

    if (Zarplata > 999) {
        if (Zarplata < 1000000){
            cout << "Kruto";
        }
    }
    if (Zarplata > 999999) {
        cout << "Da ti millioner";
    }


    if (Zarplata<1000) {
        cout << "Rabotai bolshe!";
    }

    cout << ", no ti molodec!" << endl;

    return 0;
}
