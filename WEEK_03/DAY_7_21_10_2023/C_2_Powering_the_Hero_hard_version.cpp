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
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        priority_queue<long long> pq;
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                if (pq.empty())
                    continue;
                ans += pq.top();
                pq.pop();
            }
            else
                pq.push(v[i]);
        }
        cout << ans << "\n";
    }

    return 0;
}