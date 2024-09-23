#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void solve()
{
    vector<ll> ideal = {1, 1, 2, 2, 2, 8};
    vector<ll> have;
    vector<ll> result(6);
    for (int i = 0; i < 6; i++)
    {
        ll pieces;
        cin >> pieces;
        have.pb(pieces);
    }
    for (int i = 0; i < 6; i++)
    {
        result[i] = ideal[i] - have[i];
        cout << result[i] << " ";
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