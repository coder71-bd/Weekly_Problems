#include <bits/stdc++.h>
using namespace std;

vector<int> construct(int f, int k)
{
    vector<int> result;
    for (int i = 0; i < k; ++i)
    {
        if (i < f - 1)
            result.push_back(i + 2);
        else
            result.push_back(1);
    }
    return result;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, n;
        cin >> k >> n;
        int ans = 1;

        for (int i = 1; i < k; i++)
        {
            vector<int> d = construct(i, k - 1);
            int sum = 0;
            for (int x : d)
                sum += x;
            if (sum <= n - 1)
                ans = i;
        }

        vector<int> res = {1};

        vector<int> d = construct(ans, k - 1);

        for (int x : d)
            res.push_back(res.back() + x);

        for (int value : res)
            cout << value << ' ';

        cout << "\n";
    }
    return 0;
}
