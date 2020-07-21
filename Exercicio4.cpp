#include <iostream>

using namespace std;

int main()
{

    float A, B;

    cout << "A ";
    cin >> A;
    cout << "B ";
    cin >> B;

    cout << "A + B = " << A + B << endl;
    cout << "A - B = " << A - B << endl;
    cout << "A x B = " << A *  B << endl;

    if (B != 0)
    {
        cout << "A/B ="<<  A / B;
    }
    else {
      
       cout << "A/B =" <<" ";

    }

    return 0;
}
