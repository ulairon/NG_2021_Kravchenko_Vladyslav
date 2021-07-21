
#include <iostream>

using namespace std;

int main()
{
    int PervoeChislo, VtoroeChislo;
    int For_Cases;

    cout << "vvedite pervoe chislo: " ;
    cin >> PervoeChislo;

    cout << "vvedite vtoroe chislo: " ;
    cin >> VtoroeChislo;

    cout << "vvedite svoe deistvie" << endl ;
    cout<< "1- dobavit" << endl ;
    cout<< "2- otnimanie" << endl;
    cout << "3- umnozhenie" << endl ;
    cout << "4- delenie " << endl << endl ;
    cout << "Deistvie: " ;
    cin >> For_Cases;

    cout <<endl << endl << "Result: ";

    switch (For_Cases)
    {

    case 1 :
        cout << PervoeChislo + VtoroeChislo << endl ;
        break;

    case 2 :
        cout << PervoeChislo - VtoroeChislo << endl ;
        break;

    case 3 :
        cout << PervoeChislo * VtoroeChislo << endl ;
        break;

    case 4 :
        cout << PervoeChislo / VtoroeChislo << endl ;
        break;

    default :
        cout << "vveden ne pravelniy tip deistviya";
    }

    return 0;
}
