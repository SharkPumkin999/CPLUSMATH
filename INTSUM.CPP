#include <iostream>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    long long acc = (b * (b + 1) / 2) - ((a - 1) * a / 2);

    cout << acc << endl;

    return 0;
}

