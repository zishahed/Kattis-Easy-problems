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
    int temp = tc - 1;
    ll sum = -temp;
    while (tc--)
    {
        sum += solve();
    }
    cout << sum << endl;
    return 0;
}