#include <iostream>

using namespace std;

int main()
{
    int PCh, VCh, R;
    char D;
    cout << "vvedite pervoe chislo: " ;
    cin >> PCh;
    cout << "vvedite vtoroe chislo: " ;
    cin >> VCh;
    cout << "vvedite svoe deistvie (1- dobavit, 2- otnimanie, 3- umnozhenie, 4- delenie.): " ;
    cin >> D;
    switch (D)
    {
        case '1' :
        R = PCh + VCh;
        break;
        case '2' :
        R = PCh - VCh ;
        break;
        case '3' :
        R = PCh * VCh ;
        break;
        case '4' :
        R = PCh/VCh ;
        break;
    }
    cout << "Otvet: " << R << endl ;
    return 0;
}

        case '4' :
        PCh/VCh ;
        break;
    }
    cout << "Otvet: " << R << endl ;
    return 0;
}
