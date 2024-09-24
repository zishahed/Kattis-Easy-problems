#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void solve()
{
    string s;
    cin >> s;
    ll sum = 0, sumy = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            sum++;
        if (s[i] == 'y')
            sumy++;
    }
    cout << sum << " " << sum + sumy << endl;
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