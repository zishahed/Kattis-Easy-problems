#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void solve()
{
    ll m;
    cin >> m;
    switch (m)
    {
    case 1:
        cout << 31 << endl;
        break;
    case 2:
        cout << 28 << endl;
        break;
    case 3:
        cout << 31 << endl;
        break;
    case 4:
        cout << 30 << endl;
        break;
    case 5:
        cout << 31 << endl;
        break;
    case 6:
        cout << 30 << endl;
        break;
    case 7:
        cout << 31 << endl;
        break;
    case 8:
        cout << 31 << endl;
        break;
    case 9:
        cout << 30 << endl;
        break;
    case 10:
        cout << 31 << endl;
        break;
    case 11:
        cout << 30 << endl;
        break;
    case 12:
        cout << 31 << endl;
        break;
    default:
        break;
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