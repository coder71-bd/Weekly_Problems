#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> upper(26, 0), lower(26, 0);
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                upper[s[i] - 'A']++;
            else
                lower[s[i] - 'a']++;
        }

        int res = 0;
        for (int i = 0; i < 26; i++)
        {
            int pairs = min(lower[i], upper[i]);
            res += pairs;
            lower[i] -= pairs;
            upper[i] -= pairs;
            int add = min(k, max(lower[i], upper[i]) / 2);
            k -= add;
            res += add;
        }

        cout << res << "\n";
    }
    return 0;
}