#include <iostream>

using namespace std;

int main()
{

    int N;
    int ND;

    cout << "Numero de lados = ";
    cin >> N;

    ND = (N * (N - 3)) / 2;

    if (N < 3)
    {

        cout << "No minimo 3 lados";
    }

    else
    {

        cout << "Numero de diagonais = " << ND;
    }
    return 0;
}
