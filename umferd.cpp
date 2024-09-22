#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    float count = 0;
    float m, n;
    cin >> m >> n;
    float q = m * n;
    string s = "";
    while (n--)
    {
        string in;
        cin >> in;
        s += in;
    }
    for (int i = 0; i < q; i++)
    {
        if (s[i] == '.')
            count++;
    }
    cout << count / q << endl;
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