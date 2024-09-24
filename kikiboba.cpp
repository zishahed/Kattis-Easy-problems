#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void solve()
{
    string s;
    cin >> s;
    ll sumb = 0, sumk = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'b')
            sumb++;
        if (s[i] == 'k')
            sumk++;
    }
    if (sumb > sumk)
        cout << "boba" << endl;
    else if (sumb == sumk && (sumb))
        cout << "boki" << endl;
    else if (sumb < sumk)
        cout << "kiki" << endl;
    else
        cout << "none" << endl;
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