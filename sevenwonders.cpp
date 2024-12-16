#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define rep(i, n) for (int i = 1; i <= n; i++)
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define pb push_back
void solve()
{
    string s;
    cin >> s;
    ll t, c, g;
    for (auto i : s)
    {
        if (i == 'T')
            t++;
        else if (i == 'C')
            c++;
        else if (i == 'G')
            g++;
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