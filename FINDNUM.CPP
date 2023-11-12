#include <iostream>
using namespace std;
int x;
int main()
{
    cin >> x;
    if(x >= 0)
        cout << -1;
    else
        cout << x-1;
}
