#include <iostream>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    long long luongcao = max(a, max(b, c));
    long long luongthap = min(a, min(b, c));
    long long ongdcdulai = (a + b + c) - (luongcao + luongthap);
    cout << luongthap;
    cout << ongdcdulai;
    cout << luongcao;
    return 0;
}
