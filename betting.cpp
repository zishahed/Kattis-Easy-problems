#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void solve()
{
    double n;
    cin >> n;
    cout << fixed << setprecision(3) << 100 / n << endl;
    cout << fixed << setprecision(3) << (100 / (100 - n)) << endl;
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