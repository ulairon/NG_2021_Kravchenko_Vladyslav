#include <iostream>

using namespace std;

int main()
{
    int chislo, for_chislo;

    cout << "vvedite chislo: " ;
    cin >> chislo ;

    while (for_chislo <= chislo )
    {
        cout << for_chislo << " " ;
        for_chislo++ ;
    }

    return 0 ;
}
