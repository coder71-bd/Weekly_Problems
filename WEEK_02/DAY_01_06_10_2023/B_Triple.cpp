#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n + 1, 0);
        int res = -1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v[x]++;
            if (v[x] >= 3)
                res = x;
        };

        cout << res << "\n";
    }
    return 0;
}