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

        if (v[0] % 2 == 1)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            string res = "YES";
            for (int i = 1; i < n; i++)
                if (v[i] % 2 == 1)
                {
                    res = "NO";
                    break;
                }

            cout << res << "\n";
        }
    }
    return 0;
}