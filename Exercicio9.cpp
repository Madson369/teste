#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int DEC;
    int DIG;
    int P;
    int i;
    cout << "DEC ";
    cin >> DEC;

    P = 15;
    DIG = DEC;

    for (i = 0; P > -1; P--)
    {
        
        

        if ( DIG >= pow(2, P) )
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


