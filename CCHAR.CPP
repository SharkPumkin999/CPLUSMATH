#include <iostream>
using namespace std;

int main() {
    char c;
    int k;
    cin >> c >> k;
    if(c +k <= 'z')
        cout << char(c + k);
    else cout<< char('a'+(c - 'a' +k) % 26);


}
