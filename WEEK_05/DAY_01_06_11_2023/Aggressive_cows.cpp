#include <bits/stdc++.h>
using namespace std;

bool isValid(int a[], int diff, int n, int c)
{
    int cnt = 1;
    int last = 0;
    for (int i = 1; i < n; i++)
    {
        if (abs(a[i] - a[last]) >= diff)
        {
            cnt++;
            last = i;
        }
    }
    return cnt >= c;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n);

        int l = 0, r = INT_MAX, res;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (isValid(a, mid, n, c))
            {
                res = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        cout << res << "\n";
    }
    return 0;
}