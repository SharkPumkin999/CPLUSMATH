#include <bits/stdc++.h>
#define int long long
#define FATER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

main()
{

FATER;
 int a,b,l,r;
 cin>>l>>r>>a>>b;
 int bc=a*b/__gcd(a,b);
l--;
r/=bc;
l/=bc;
cout<<r-l;
 return 0;
}
