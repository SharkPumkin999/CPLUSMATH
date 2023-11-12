#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;
    for (long long a = 1; a <= n / 4; a++) {
        for (long long b = a + 1; b <= n / 3; b++) {
            for (long long c = b + 1; c <= n / 2; c++) {
                long long d = n - a - b - c;

                if (d > c) {
                    cout << a << " " << b << " " << c << " " << d << endl;
                    return 0;
                }
            }
        }
    }

    cout << "0" << endl;
    return 0;
}
