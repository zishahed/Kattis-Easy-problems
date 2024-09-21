#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll x, y;
    cin >> x >> y;
    cout << 2022 + (x / y) << endl;
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