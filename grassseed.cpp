#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void solve()
{
    float cost, n;
    cin >> cost >> n;
    float sum = 0;
    while (n--)
    {
        float a, b;
        cin >> a >> b;
        sum += a * b;
    }
    cout << fixed << setprecision(6) << sum * cost << endl;
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