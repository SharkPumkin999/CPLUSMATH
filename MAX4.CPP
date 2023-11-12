#include <iostream>

using namespace std;

int main()
{
    int a , b, c , d;
    cin >> a >> b >> c >> d;
    if (a >= b and a >= c and  a >= d)
        cout << a;
    if (b >= a and b >= c and  b >= d)
        cout << b;
    if (c >= b and c >= a and  c >= d)
        cout << c;
    if (d >= b and d >= c and  d >= a)
        cout << d;
}
