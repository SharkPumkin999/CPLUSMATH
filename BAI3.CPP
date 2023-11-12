#include <iostream>

using namespace std;

int main() {
    int k, d, n;
    cin >> k >> d >> n;
    int nthElement = k + (n - 1) * d;
    cout << nthElement << endl;
}
