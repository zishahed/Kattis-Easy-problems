#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void solve()
{
    ll row, col;
    cin >> row >> col;
    ll p[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> p[i][j];
        }
    }
    bool flag = false;
    for (int i = 1; i < row - 1; i++)
    {
        for (int j = 1; j < col - 1; j++)
        {
            if (p[i][j] < p[i - 1][j] && p[i][j] < p[i][j - 1] && p[i][j] < p[i][j + 1] && p[i][j] < p[i + 1][j])
            {
                flag = true;
                break;
            }
        }
    }
    cout << ((flag) ? "Jebb" : "Neibb") << endl;
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