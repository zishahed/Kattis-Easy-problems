#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void solve()
{
    ll n;
    cin >> n;
    ll rev = 0;
    while (n > 0)
    {
        rev <<= 1;
        rev = rev | (n & 1);
        n >>= 1;
    }
    cout << rev << endl;
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