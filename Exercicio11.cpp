using namespace std;

#include <iostream>
#include <cmath>

int main()

{
    int x;
    for (x = 0; x < 16; x++)
        cout << hex << x;
    cout << endl;

    int z;
    for (z = 0; z < 16; z++)
        cout << oct << z;
    cout << endl;

    int w;
    for (w = 0; w < 16; w++)
        cout << dec << w;
    cout << endl;

    int DEC;
    int DIG;
    int P;
    int i;
    for (DEC = 0; DEC < 16; DEC++)
    {
        cout << " ";
        P = 3;
        DIG = DEC;

        for (i = 0; P > -1; P--)
        {

            if (DIG >= pow(2, P))
            {
                DIG = DIG - pow(2, P);

                cout << "1";
            }

            else
            {

                cout << "0";
            }
        }
    }

    return 0;
}
