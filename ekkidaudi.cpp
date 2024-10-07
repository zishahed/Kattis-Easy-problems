#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define rep(i, n) for (int i = 1; i <= n; i++)
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define pb push_back
void solve()
{
    string s1;
    getline(cin, s1);
    string s2;
    getline(cin, s2);
    string ans = "";
    for (int i = 0; s1[i] != '|'; i++)
    {
        ans += s1[i];
    }
    for (int i = 0; s2[i] != '|'; i++)
    {
        ans += s2[i];
    }
    ans += " ";
    auto i1 = s1.find('|') + 1;
    auto i2 = s2.find('|') + 1;
    for (int i = i1; i < s1.size(); i++)
    {
        ans += s1[i];
    }
    for (int i = i2; i < s2.size(); i++)
    {
        ans += s2[i];
    }
    cout << ans << endl;
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