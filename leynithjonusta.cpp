#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    string s;
    getline(cin, s);
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    cout << s << endl;
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