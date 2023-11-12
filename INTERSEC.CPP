#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    long long a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    if (a1 == a2) {
        if (b1 == b2) {
            cout << 1 << endl;
        } else {
            cout << -1 << endl;
        }
    } else {
        double x = double(b2 - b1) / (a1 - a2);
        double y = a1 * x + b1;
        cout << fixed << setprecision(2) << x << " " << y << endl;
    }

    return 0;
}

