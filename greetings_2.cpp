#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void solve()
{
    string s, s1;
    cin >> s;
    ll e = 2 * (s.size() - 2);
    for (int i = 0; i < e; i++)
    {
        s1 += 'e';
    }
    cout << 'h' << s1 << 'y' << endl;
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