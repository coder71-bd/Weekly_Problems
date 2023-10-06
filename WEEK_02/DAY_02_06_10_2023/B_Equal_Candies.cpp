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
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());

        long long int total = 0;

        for (int i = 1; i < n; i++)
        {
            if (v[i] > v[0])
            {
                total += v[i] - v[0];
            }
        }

        cout << total << "\n";
    }
    return 0;
}