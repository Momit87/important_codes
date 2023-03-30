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
// without u or with u there is always gonna be champions
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // bfs

    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> v(n + 1);
    for (ll i = 0; i < m; i++)
    {
        ll x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    ll s;
    cin >> s;
    vector<ll> lev(n + 1, -1);
    queue<ll> q;
    lev[s] = 0;
    q.push(s);
    while (!q.empty())
    {
        ll cur = q.front();
        q.pop();

        for (auto u : v[cur])
        {
            if (lev[u] == -1)
            {
                lev[u] = lev[cur] + 1;
                q.push(u);
            }
        }
    }
    for (ll i = 1; i <= n; i++)
    {
        cout << i << ' ' << lev[i] << endl;
    }

    return 0;
}
