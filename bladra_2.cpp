#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void solve()
{
    float v, a, t;
    cin >> v >> a >> t;
    printf("%.9f", v * t + .5 * a * t * t);
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