#include <iostream>
using namespace std;
int main()
{
    int razmer ;

    cout << "vvedite razmer elki: " ;
    cin >> razmer;
    cout << endl ;

    if (razmer <= 0)
    {
        cout << "razmer dolzhen bit bolshe chem 1" ;
    } else {

        for (int i = 0;i < razmer; i++)
        {
            for(int j = i;j< razmer; j++)
                cout << ' ' ;

            for(int k = razmer; k >= razmer - ( 2* i); k--)
                cout << '*' ;

            cout << endl ;
        }

        for (int l = 0; l < razmer; l++)
        {
            cout << ' ' ;
        }
    }
    cout << '*' ;

    return 0;
}
