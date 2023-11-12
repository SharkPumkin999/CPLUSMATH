#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  double a,b;
  cin >> a >> b;
  double  hcn = a * b;
  double c = sqrt(a * a + b * b );
  double tron = 3.14 * c * c/4;
  cout << fixed << setprecision(4);
  cout << tron - hcn ;

}
