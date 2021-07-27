#include <iostream>

using namespace std;

int main()
{
    int razmer ;

    cout << "vvedite razmer elki: ";
    cin >> razmer ;


    if (razmer <= 1)
    {
        cout << "razmer elki dolzhen bit bolshe chem 1: ";
    } else {

        for (int i = 0;i < razmer; i++)
        {

            for (int j = i; j < razmer; j++)
            {
                cout << ' ' ;
            }

            for (int k = razmer; k >= razmer-(2*i) ; k--)
            {
                cout << '*' ;
            }
            cout << endl ;

        }

        for (int f = 0; f < razmer; f++)
        {
            cout << ' ' ;
        }
        cout << '*' ;
    }
    return 0;
}
