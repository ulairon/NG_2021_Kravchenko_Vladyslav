#include <iostream>

using namespace std;

int main()
{
    int Zvezda, for_Zvezda ;
    
    cout << "Skolko zvezdochek vi hotite videt: " ;
    cin >> Zvezda ;
    
    while (for_Zvezda < Zvezda )
    {
        cout << "*" ;
        for_Zvezda++ ;
    }
    
    return 0 ;
}
