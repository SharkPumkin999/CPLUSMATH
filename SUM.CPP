#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    long long x, y, a, b;
    cin >> x >> y >> a >> b;

    long long lcm = (x * y) / gcd(x, y);

    long long count = (b / lcm) - ((a - 1) / lcm);

    cout << count << endl;

    return 0;
}
