#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define rep(i, n) for (int i = 1; i <= n; i++)
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define pb push_back
float solve()
{
    float n, p = 0;
    cin >> n;
    vector<ll> v1 = {1, 2, 3, 4, 5, 6};
    unordered_set<ll> v2 = {1, 2, 3, 4, 5, 6};
    fo(i, v1.size())
    {
        ll target = n - v1[i];
        if (v2.find(target) != v2.end())
            p++;
    }
    return p;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    float tc, sum = 0;
    cin >> tc;
    while (tc--)
    {
        sum += solve();
    }
    cout << fixed << setprecision(4) << sum / 36 << endl;
    return 0;
}