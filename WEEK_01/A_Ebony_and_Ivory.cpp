#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int dp[N];

bool solve(int c, int a, int b)
{
    if (c - a == 0 || c - b == 0)
        return true;
    if (c - a < 0 && c - b < 0)
        return false;
    if (dp[c] != -1)
        return dp[c];
    bool res1 = solve(c - a, a, b);
    bool res2 = solve(c - b, a, b);

    return dp[c] = res1 || res2;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    memset(dp, -1, sizeof(dp));
    if (solve(c, a, b))
        cout << "Yes"
             << "\n";
    else
        cout << "No"
             << "\n";
    return 0;
}