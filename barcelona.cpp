#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void solve()
{
    ll n, f;
    cin >> n >> f;
    ll i;
    for (i = 1; i <= n; i++)
    {
        ll element;
        cin >> element;
        if (element == f)
        {
            break;
        }
    }
    if (i == 1 || i == 2)
    {
        if (i == 1)
            cout << "fyrst" << endl;
        else
            cout << "naestfyrst" << endl;
    }
    else
        cout << i << " fyrst" << endl;
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