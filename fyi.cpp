#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void solve()
{
    string s;
    cin >> s;
    if (s[0] == '5' && s[1] == '5' && s[2] == '5')
        cout << 1 << endl;
    else
        cout << 0 << endl;
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