#include <iostream>
#include <cmath>
using namespace std;

int x;

int main() {
    cin >> x;
    if (sqrt(x) * sqrt(x) == x) {
        cout << sqrt(x);
    } else {
        cout << -1;
    }
}
