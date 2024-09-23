#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void solve()
{
    ll n;
    cin >> n;
    vector<string> echo;
    while (n--)
    {
        string s;
        cin >> s;
        echo.pb(s);
    }
    for (int i = 0; i < echo.size(); i += 2)
        cout << echo[i] << endl;
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