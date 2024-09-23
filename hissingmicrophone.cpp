#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void solve()
{
    string s;
    cin >> s;
    bool f = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 's' && s[i + 1] == 's')
        {
            f = true;
            break;
        }
    }
    cout << ((f) ? "hiss" : "no hiss") << endl;
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