#include <iostream>

using namespace std;

int main() {
    int sum, diff;
    cin >> sum >> diff;

    int a = (sum + diff) / 2;
    int b= (sum - diff) / 2;

    cout << b << " " << a << endl;

    return 0;
}
