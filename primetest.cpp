#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define sp " "
#define PI 2 * acos(0.0)
#define ff(i, n) for (ll i = 0; i < n; i++)
#define ff1(i, n) for (ll i = 1; i <= n; i++)
#define lcm(a, b) (((a) * (b)) / __gcd(a, b))
#define ftc    \
    ll ft;     \
    cin >> ft; \
    for (ll ftt = 0; ftt < ft; ftt++)
#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)

ll big = 1e9 + 7;


bool isprime(ll n){
    if(n==1){
        return false;
    }
    ll q=sqrt(n);
    for(ll i=2;i<=q;i++){
        if(n%i==0){
            return false;
        }

    }
    return true;
}
