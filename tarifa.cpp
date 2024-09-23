#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void solve()
{
    ll n, use;
    cin >> n;
    ll month;
    cin >> month;
    ll avl = 0;
    while (month--)
    {
        avl += n;
        cin >> use;
        if (avl >= use)
            avl -= use;
        else
            avl -= n;
    }
    cout << (avl + n) << endl;
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