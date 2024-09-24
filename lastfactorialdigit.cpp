#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
ll fact(ll n)
{
    ll product = 1;
    while (n)
    {
        product *= n;
        n--;
    }
    return product;
}
void solve()
{
    ll n;
    cin >> n;
    if (n < 5)
        cout << ((n < 4) ? fact(n) : 4) << endl;
    else
        cout << 0 << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}