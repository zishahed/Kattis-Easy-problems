#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    float n;
    cin >> n;
    if (static_cast<int>(n) % 4 == 0) // non-integers can not perform modulus operation
        cout << n / 4 << ".0" << endl;
    else
        cout << n / 4 << endl;
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