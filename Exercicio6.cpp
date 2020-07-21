#include <iostream>
#include <cmath>

using namespace std;

int main()
{

  int H;
  int M;
  int S;
  int T;
  cout << "H" << endl;
  cin >> H;
  cout << "M" << endl;
  cin >> M;
  cout << "S" << endl;
  cin >> S;

  T = S + (M * 60) + (H * 60 * 60);

  if (M >= 0 && M < 60 && S >= 0 && S < 60)
  {

    cout << T << endl;
  }

  else
  {

    cout << "Admite somente valores entre 0 e 59";
  }

  return 0;
}
