#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void solve()
{
    ll n, m, sum = 0;
    cin >> n >> m;
    ll mine[n + 10][m + 10];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char ch;
            cin >> ch;
            mine[i][j] = ch;
            if (mine[i][j] == '*')
                sum++;
        }
    }
    cout << sum << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mine[i][j] == '*')
                cout << i + 1 << " " << j + 1 << endl;
        }
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