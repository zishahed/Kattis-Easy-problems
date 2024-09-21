#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    unordered_map<ll, string> fee;
    ll a, b, c;
    cin >> a;
    fee[a] = "Monnei";
    cin >> b;
    fee[b] = "Fjee";
    cin >> c;
    fee[c] = "Dolladollabilljoll";
    auto &it = fee[min(min(a, b), c)];
    cout << it << endl;
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