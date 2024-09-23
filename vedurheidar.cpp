#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void solve(ll w)
{
    string s;
    cin >> s;
    ll sp;
    cin >> sp;
    cout << ((sp >= w) ? s + " opin" : s + " lokud") << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll wind;
    cin >> wind;
    ll tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve(wind);
    }
    return 0;
}