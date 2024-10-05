#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void solve()
{
    vector<ll> v1, v2;
    ll n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        ll element;
        cin >> element;
        v1.pb(element);
    }
    for (int i = 0; i < m; i++)
    {
        ll element;
        cin >> element;
        v2.pb(element);
    }
    unordered_set<ll> hashSet(v2.begin(), v2.end());
    for (auto num : v1)
    {
        if (hashSet.find(num) != hashSet.end())
            cout << num << ' ';
    }
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