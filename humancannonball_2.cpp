#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define rep(i, n) for (int i = 1; i <= n; i++)
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define pb push_back
void solve()
{
    double v, theta, x, h1, h2;
    cin >> v >> theta >> x >> h1 >> h2;
    theta *= 0.0174533;
    h1++;
    h2--;
    double g = 9.81;
    double t = x / (cos(theta) * v);
    double y = (v * t * sin(theta)) - (0.5 * g * t * t);
    cout << ((y > h1 && y < h2) ? "Safe\n" : "Not Safe\n");
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}