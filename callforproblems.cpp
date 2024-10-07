#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define rep(i, n) for (int i = 1; i <= n; i++)
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define pb push_back
#define ln '\n'
void solve()
{
    ll n;
    cin >> n;
    ll ex = 0;
    fo(i, n)
    {
        ll num;
        cin >> num;
        if (num % 2 != 0)
            ex++;
    }
    cout << ex << ln;
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