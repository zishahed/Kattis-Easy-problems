#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
float solve()
{
    float product = 1;
    float a, b;
    cin >> a >> b;
    product = a * b;
    return product;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc;
    cin >> tc;
    float sum = 0;
    while (tc--)
    {
        sum += solve();
    }
    cout << fixed << setprecision(3) << sum << endl;
    return 0;
}