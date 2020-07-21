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

    return 0;
}
