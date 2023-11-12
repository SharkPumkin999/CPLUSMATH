#include <bits/stdc++.h>
using namespace std;
int main ()
{
    long long L,H,a,b,n,r, dem =0;
    cin >> L >> H >> a >>b;
    n = a *b;
    while(b > 0)
    {
        r = a%b ; a=b ;b = r;
    }
    n = n/a;
    cout << H/n + (L -1)/n;
}
