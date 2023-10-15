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
        string s[n];
        map<string, bool> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            mp[s[i]] = true;
        }
        for (int i = 0; i < n; i++)
        {
            int possible = 0;
            int len = s[i].length();
            for (int j = 1; j < len; j++)
            {
                string one = s[i].substr(0, j);
                string two = s[i].substr(j, len - j);

                if (mp[one] && mp[two])
                    possible = 1;
            }
            cout << possible;
        }
        cout << '\n';
    }
    return 0;
}