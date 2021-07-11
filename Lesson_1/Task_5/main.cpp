#include <iostream>

using namespace std;

int main()
{
    int PCh, VCh;
    char D;
    cout << "vvedite pervoe chislo: " ;
    cin >> PCh;
    cout << "vvedite vtoroe chislo: " ;
    cin >> VCh;
    cout << "vvedite svoe deistvie (1- dobavit, 2- otnimanie, 3- umnozhenie, 4- delenie.): " ;
    cin >> D;
    switch (D)
    {
        case '1' :
        cout << "otvet: "<< PCh+VCh<<endl;
        break;
        case '2' :
        cout << "otvet: "<< PCh-VCh<<endl;
        break;
        case '3' :
        cout << "otvet: "<< PCh*VCh<<endl;
        break;
        case '4' :
        cout << "otvet: "<< PCh/VCh<<endl;
        break;
    }

    return 0;
}
