#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
ll solve()
{
    ll n;
    cin >> n;
    return n;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    ll temp = tc;
    ll sum = 0;
    while (temp--)
    {
        sum += solve();
    }
    cout << sum / tc << endl;
    return 0;
}