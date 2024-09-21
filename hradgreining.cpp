#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool findString(string s1, string s2)
{
    for (int i = 0; i <= s2.size() - s1.size(); i++)
    {
        int j;
        for (j = 0; j < s1.size(); j++)
        {
            if (s2[i + j] != s1[j])
                break;
        }
        if (j == s1.size())
            return true;
    }
    return false;
}
void solve()
{
    string s;
    cin >> s;
    string t = "COV";
    cout << ((findString(t, s)) ? "Veikur!" : "Ekki veikur!");
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