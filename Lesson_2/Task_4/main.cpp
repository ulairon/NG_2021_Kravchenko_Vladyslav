#include <iostream>
using namespace std;

int main()
{

    int dlina, for_dlina, for_dlina_2 ;

    cout << "vvedite dlinnu pravilnogo treugolnika: " ;
    cin >> dlina ;

    cout << endl ; //to make free space.
    if (dlina <= 1)
    {
        cout << "dlinna dolzhna bit bolshe chem 1" ;
    } else {

        for(for_dlina = 1; for_dlina <= dlina; for_dlina++)
        {

            for(for_dlina_2 = 1; for_dlina_2 <= for_dlina; for_dlina_2++)
            {
                cout << "* ";
            }

            cout << endl ;
        }
    }
    return 0 ;
}

