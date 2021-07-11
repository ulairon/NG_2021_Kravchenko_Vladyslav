#include <iostream>

using namespace std;

int main()
{
    int N, M, K;
    cout << "Skolko nuzhno oreshkov:";
    cin >> N;
    cout << "Skolko oreshkov v shiske:";
    cin >> M;
    cout << "Skolko ona sobrala:";
    cin >> K;
    if (N > M*K){
    cout << "Eto pechalno - CMEPTb!"<<endl;
    }
    else { cout << "Belochka budet zhirnenkoi"<<endl;}
    return 0;
}
