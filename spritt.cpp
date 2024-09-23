#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void solve()
{
    ll n, x;
    cin >> n >> x;
    while (n--)
    {
        ll num;
        cin >> num;
        x -= num;
    }
    cout << ((x >= 0) ? "Jebb" : "Neibb") << endl;
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