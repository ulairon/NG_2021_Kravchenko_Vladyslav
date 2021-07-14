#include <iostream>

using namespace std;

int main()
{
    int Nuzhno, Skilko_v_Shiske, Sobrano;

    cout << "Skolko nuzhno oreshkov:" ;
    cin >> Nuzhno;

    cout << "Skolko oreshkov v shiske:" ;
    cin >> Skilko_v_Shiske;

    cout << "Skolko ona sobrala: " ;
    cin >> Sobrano;

    if (Nuzhno > Skilko_v_Shiske * Sobrano) {
    cout << "Eto pechalno - CMEPTb!" << endl ;
    } else { 
        cout << "Belochka budet zhirnenkoi" << endl ;
      }

    return 0;
}
