#include <iostream>

int main() {
    double a, b, c, d;
    std::cin >> a >> b >> c >> d;
    if (b >= c && a <= d) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
}
