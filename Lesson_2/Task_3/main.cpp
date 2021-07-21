#include <iostream>

using namespace std;

int main()
{
    int dlina, shirina, for_dlina, for_shirina ;

    cout << "vvedite dlinnu: " ;
    cin >> dlina ;

    cout << "vvedite shirinu: " ;
    cin >> shirina ;

    if (dlina <= 1 || shirina <= 1)
    {

        cout << "neverno zadano odno iz znacheniy" ;

    } else {

        for (for_shirina = 1; for_shirina <= shirina ; for_shirina++ )
        {

            for (for_dlina = 0; for_dlina < dlina; for_dlina++ )
            {
                cout << "* " ;
            }

            cout << endl ;
        }
    }

    return 0;
}
