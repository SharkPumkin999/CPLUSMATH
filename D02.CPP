#include <iostream>
#include <algorithm>
using namespace std;

int main() {
     int a, b, c;
     cin >> a >> b >> c;
     int max1 = max(max(a, b), c);
     cout << max1 << endl;
}

