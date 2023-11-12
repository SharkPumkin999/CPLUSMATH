#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long x0, y0, r, x, y;
    cin >> x0 >> y0 >> r >> x >> y;
    double distance = sqrt(pow(x - x0, 2) + pow(y - y0, 2));
    if (distance <= r) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
