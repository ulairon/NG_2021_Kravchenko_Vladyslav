#include <iostream>

using namespace std;

int main()
{
    int PervoeChislo, VtoroeChislo, Result;
    char For_Cases;
    
    cout << "vvedite pervoe chislo: " ;
    cin >> PervoeChislo;
    
    cout << "vvedite vtoroe chislo: " ;
    cin >> VtoroeChislo;
    
    cout << "vvedite svoe deistvie (1- dobavit, 2- otnimanie, 3- umnozhenie, 4- delenie.): " ;
    cin >> For_Cases;

    switch (For_Cases)
    {
        case '1' :
        Result = PervoeChislo + VtoroeChislo ;
        break;
        
        case '2' :
        Result = PervoeChislo - VtoroeChislo ;
        break;
        
        case '3' :
        Result = PervoeChislo * VtoroeChislo ;
        break;
        
        case '4' :
        Result = PervoeChislo / VtoroeChislo ;
        break;
    }

    cout << "Otvet: " << Result << endl ;

    return 0;
}
