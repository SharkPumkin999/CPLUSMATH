#include <iostream>
#include <algorithm>

int main() {
    long long x, n;
    std::cin >> x >> n;
    long long a = x;
    long long b = n;

    while (b > 0) {
        long long r = a % b;
        a = b;
        b = r;
    }

    std::cout << a;
}

