#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll x, y;
    cin >> x >> y;
    if (x > 0 && y > 0)
        cout << 1 << endl;
    else if (x < 0 && y > 0)
        cout << 2 << endl;
    else if (x < 0 && y < 0)
        cout << 3 << endl;
    else
        cout << 4 << endl;
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