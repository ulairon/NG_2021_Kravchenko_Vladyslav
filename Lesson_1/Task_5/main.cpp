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
    
    cout << "vvedite svoe deistvie" << endl << "1- dobavit" << endl << "2- otnimanie" << endl << "3- umnozhenie" << endl << "4- delenie " << endl ;
    cin >> For_Cases;
    
    cout << "Result: ";
    
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
