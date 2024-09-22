#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    string s;
    cin >> s;
    string shrt = "";
    for (int i = 0; i < s.size(); i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            shrt += s[i];
    cout << shrt << endl;
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