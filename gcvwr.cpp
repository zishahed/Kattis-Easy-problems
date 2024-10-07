#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void solve()
{
    ll g, t, n;
    cin >> g >> t >> n;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        ll element;
        cin >> element;
        sum += element;
    }
    ll tow = (g - t) * 0.9;
    cout << tow - sum << endl;
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