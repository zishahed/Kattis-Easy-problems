#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define rep(i, n) for (int i = 1; i <= n; i++)
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define pb push_back
void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    if (b * b == 4 * a * c)
        cout << 1 << endl;
    else if (b * b > 4 * a * c)
        cout << 2 << endl;
    else
        cout << 0 << endl;
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