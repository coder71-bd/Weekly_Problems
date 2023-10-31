#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, m, h;
        cin >> n >> m >> h;
        long long int c[n], p[m];
        for (int i = 0; i < n; i++)
            cin >> c[i];
        for (int i = 0; i < m; i++)
            cin >> p[i];
        sort(c, c + n);
        sort(p, p + m);

        long long int ans = 0;
        for (int i = n - 1, j = m - 1; i >= 0 && j >= 0; i--, j--)
            ans += min(c[i], p[j] * h);

        cout << ans << "\n";
    }
    return 0;
}
