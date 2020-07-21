#include <iostream>

using namespace std;

int main()
{

    int TS;
    int H;
    int M;
    int S;
    cout << "Total de segundos =" << endl;
    cin >> TS;

    H = (TS / 3600);
    M = (TS % 3600) / 60;
    S = (TS - (H * 3600 + (M * 60)));

    cout << H << " Horas " << M << " Minutos " << S << " Segundos" << endl;

    return 0;
}
