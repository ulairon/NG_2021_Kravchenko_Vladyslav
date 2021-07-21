#include <iostream>

using namespace std;

int main()
{
    int dlina, for_dlina, for_dlina_2 ;

    cout << "vvedite dlinnu storoni pravilnogo treugolnika: " ;
    cin >> dlina ;

    if (dlina <= 1)
    {
        cout << "vvedite chislo bolshe chem 1" << endl;
    } else {

        for (for_dlina = -1; for_dlina < dlina; for_dlina++ )
        {

            for (for_dlina_2 = -1; for_dlina_2 < for_dlina; for_dlina_2 ++ )
            {
                cout << "* " ;
            }

            cout << endl ;

        }

    }

    return 0;
}
