#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void solve()
{
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    string result = "";
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] != s2[i])
            result += '*';
        else
            result += '.';
    }
    cout << s1 << endl;
    cout << s2 << endl;
    cout << result << endl;
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}