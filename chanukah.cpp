#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void solve()
{
    ll day, candle, count = 2, sum = 0;
    cin >> day >> candle;
    while (candle--)
    {
        sum += count;
        ++count;
    }
    cout << day << " " << sum << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    ll day = 1;
    while (tc--)
    {
        solve();
    }
    return 0;
}