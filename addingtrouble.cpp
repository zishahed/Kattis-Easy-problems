#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    cout << ((a + b == c) ? "correct!" : "wrong!") << endl;
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