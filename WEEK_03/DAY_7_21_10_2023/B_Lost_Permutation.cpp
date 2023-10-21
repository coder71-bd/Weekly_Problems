#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s += a[i];
        }

        int sum = 0, count = 0;

        for (int i = 1; i <= s; i++)
        {
            if (sum >= s)
                break;
            sum += i;
            count = i;
        }

        sort(a.begin(), a.end());
        int mx = a[n - 1];

        if (sum != s || mx > count || count <= n)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}