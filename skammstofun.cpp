#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define rep(i, n) for (int i = 1; i <= n; i++)
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define pb push_back
void solve()
{
    ll n;
    cin >> n;
    fo(i, n)
    {
        string s;
        cin >> s;
        if (isupper(s[0]))
            cout << s[0];
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc = 1;
    while (tc--)
    {
        solve();
    }
    return 0;
}