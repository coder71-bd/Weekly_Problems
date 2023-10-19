#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s1, s2;
        cin >> n >> s1 >> s2;
        vector<int> res;

        int d = s1 - s2;
        for (; s2 >= d; s2 -= d)
            res.push_back(d);
        if (s2)
            res.push_back(s2);
        for (int i = 0; i < res.size() && res.size() + 1 < n;)
        {
            if (res[i] == 1)
            {
                i++;
                continue;
            }
            res[i]--;
            res.push_back(1);
        }
        res.push_back(d);

        sort(res.begin(), res.end());
        for (int x : res)
            cout << x << ' ';
        cout << endl;
    }
    return 0;
}