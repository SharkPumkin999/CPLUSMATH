#include <iostream>
#include <cmath>

int main() {
    int N, K;
    std::cin >> N >> K;
    int minTables = static_cast<int>(std::ceil(static_cast<double>(N) / K));
    std::cout << minTables << std::endl;

    return 0;
}
