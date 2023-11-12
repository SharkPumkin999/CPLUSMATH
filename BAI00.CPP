#include <iostream>

int main() {
    long long S, x, y, L;
    std::cin >> S >> x >> y >> L;

    if (L == 0) {
        std::cout << "AB";
    } else {
        long long timeToReachA = L / x;
        long long timeToReachB = (S - L) / y;

        if (timeToReachA < timeToReachB) {
            std::cout << "A";
        } else if (timeToReachA > timeToReachB) {
            std::cout << "B";
        } else {
            std::cout << "AB";
        }
    }

    return 0;
}
