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
        vector<int> v(n);
        for (int i = 0; i < v.size(); i++)
            cin >> v[i];
        sort(v.begin(), v.end());

        int cnt1 = 0, cnt2 = 0;
        n = v.size();

        for (int i = 0; i < (n / 2); i++)
            cnt1 += v[i];
        for (int i = (n + 1) / 2; i < n; i++)
            cnt2 += v[i];

        cout << abs(cnt1 - cnt2) << "\n";
    }
    return 0;
}