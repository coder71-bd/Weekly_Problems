#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        ll sum = 0, cnt = 0;
        bool neg = false;

        for (int i = 0; i <= n; i++)
        {
            if (i < n)
                sum += abs(v[i]);

            if (neg && (i == n || v[i] > 0))
            {
                cnt++;
                neg = false;
            }
            else if (v[i] < 0)
                neg = true;
        }

        cout << sum << " " << cnt << "\n";
    }
    return 0;
}