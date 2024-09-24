#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void solve()
{
    ll n;
    cin >> n;
    ll phone = 0, wallet = 0, keys = 0;
    while (n--)
    {
        string s;
        cin >> s;
        if (s == "phone")
            phone++;
        if (s == "wallet")
            wallet++;
        if (s == "keys")
            keys++;
    }
    if (!(phone) || !(wallet) || !(keys))
    {
        if (!keys)
            cout << "keys" << endl;
        if (!phone)
            cout << "phone" << endl;
        if (!wallet)
            cout << "wallet" << endl;
    }
    else
    {
        cout << "ready" << endl;
    }
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