using namespace std;

        #include <iostream>
        #include <cmath>

        int main()

{
    int A;
    int B;
    int C;
    float S;
    float Z;
    float AR;

    cout << "A" << endl;
    cin >> A;
    cout << "B" << endl;
    cin >> B;
    cout << "C" << endl;
    cin >> C;
    S = (A + B + C) / 2;
    Z = S * (S - A) * (S - B) * (S - C);
    AR = sqrt(Z);
    cout << "Area do triangulo" << endl;
    cout << AR << endl;

    return 0;
}
