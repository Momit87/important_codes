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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    
    int n =90000000;

    vector<bool> v(n + 1, true);//O(n)
    v[0] = v[1] = false;
    for (ll i = 2; i * i <= n; i++)//O(log (log(n)))
    {
        if (v[i] == true)
        {
            for (ll j = i * i; j <= n; j += i)//O(log (n))
            {
                v[j] = false;
            }
        }
    }
    
    return 0;
}
