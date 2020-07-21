#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int P;
    int N;
    cout << "Ensira um numero ";
    cin >> N;

    for (P = 15; P >= 0; P--)
    {

        cout << ((N & (1 << P)) >> P);
    }
}
