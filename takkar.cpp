#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll a, b;
    cin >> a >> b;
    if (a == b)
        cout << "WORLD WAR 3!" << endl;
    else
        cout << ((a > b) ? "MAGA!" : "FAKE NEWS!") << endl;
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