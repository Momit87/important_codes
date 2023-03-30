#include<bits/stdc++.h>
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
vector<vector<ll>>v(10000);
vector<ll>vis(10000,0);
void DFS(ll node)
{
    vis[node]=1;
    cout<<node<<"->";
    for(auto u : v[node])
    {

        if(vis[u]==0)
        {
            DFS(u);
        }
    }
}
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //dfs
    ll n,m;
    cin>>n>>m;

    while(m--)
    {
        ll x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    ll s;
    cin>>s;
    DFS(s);
    cout<<endl;

    return 0;
}
