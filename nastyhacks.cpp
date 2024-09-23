#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void solve()
{
    ll r, e, c;
    cin >> r >> e >> c;
    if (r == (e - c))
        cout << "does not matter" << endl;
    else if (r < (e - c))
        cout << "advertise" << endl;
    else
        cout << "do not advertise" << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}