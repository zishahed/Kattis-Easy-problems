#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll x, y, a, b;
    cin >> x >> y >> a >> b;
    if (x == a || y == b)
    {
        cout << 1 << endl;
    }
    else
        cout << 2 << endl;
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