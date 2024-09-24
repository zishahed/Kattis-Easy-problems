#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void solve()
{
    string s;
    getline(cin, s);
    string vowel = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
    ll sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (s[i] == vowel[j])
                sum++;
        }
    }
    cout << sum << endl;
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