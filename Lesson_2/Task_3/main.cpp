#include <iostream>

using namespace std;

int main()
{
    int dlina, for_dlina, shirina ;

    cout << "vvedite dlinnu: " ;
    cin >> dlina ;

    if (dlina <= 1)
    {

        cout << "neverno zadano odno iz znacheniy" ;

    } else {

        for (shirina = 1; shirina <= dlina ; shirina++ )
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
