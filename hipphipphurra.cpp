#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    string s;
    cin >> s;
    ll n;
    cin >> n;
    while (n--)
    {
        cout << "Hipp hipp hurra, " << s << "!" << endl;
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