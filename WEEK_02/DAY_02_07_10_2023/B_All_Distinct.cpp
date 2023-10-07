#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 3;
vector<int> v(N, 0);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < N; i++)
            v[i] = 0;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (!v[x])
                v[x] = x;
        }

        int sum = 0;

        for (int i = 0; i < N; i++)
        {
            if (v[i])
                sum++;
        }

        if ((n - sum) % 2 == 0)
            cout << sum << "\n";
        else
            cout << sum - 1 << "\n";
    }
    return 0;
}