#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define rep(i, n) for (int i = 1; i <= n; i++)
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define pb push_back
void solve()
{
    ll n, k, d, ct = 0;
    cin >> n >> k >> d;
    vector<ll> vec;
    for (int i = 0; i < n; i++)
    {
        ll e;
        cin >> e;
        vec.pb(e + 14);
    }
    for (auto i : vec)
    {
        if (i <= (k + d))
            ct++;
    }
    cout << ct << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}