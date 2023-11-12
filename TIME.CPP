#include <iostream>
using namespace std;

int main() {
    long long m;
    cin >> m;

    long long hours = m / 3600;
    m %= 3600;
    long long minutes = m / 60;
    long long seconds = m % 60;

    cout << hours << ":" << minutes << ":" << seconds << endl;

    return 0;
}

