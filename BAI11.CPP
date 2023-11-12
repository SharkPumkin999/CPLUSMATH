#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long a , b , n ;
    cin >> a >> b;
    n = a * b;
    while(b > 0){
        long long r = a%b;
        a = b ; b = r;
    }
    n = n/a;
    int dcm =0;
    while(n > 0)
    {
        dcm++;
        n = n/10;
    }
    cout << dcm;
}
