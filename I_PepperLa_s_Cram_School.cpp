#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
const int mod = 1e9 + 7;
int n;
int dis[1005][1005];
void solve()
{

    int mn = 1e9 + 7;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> dis[i][j];
            if (i != j)
                mn = min(mn, dis[i][j]);
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            ans += (dis[i][j] == mn);
        }
    }
    cout << ans << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int __ = 1;
    while (cin >> n)
    {
        solve();
    }
    return 0;
}