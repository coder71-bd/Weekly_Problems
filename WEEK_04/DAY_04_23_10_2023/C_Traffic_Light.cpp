#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char c;
        cin >> n >> c;

        string s;
        cin >> s;

        s += s;
        vector<int> v;

        int cnt = 0;
        if (c == 'g')
            cout << 0 << "\n";
        else
        {
            for (int i = 0; i < n * 2; i++)
            {
                cnt = 0;
                if (s[i] == c)
                {
                    while (i < n * 2 && s[i] != 'g')
                    {
                        cnt++;
                        i++;

                        if (i == n * 2 - 1)
                            cnt = 0;
                    }

                    if (cnt != 0)
                        v.push_back(cnt);
                }
            }

            sort(v.begin(), v.end(), greater<int>());
            cout << v[0] << "\n";
        }
    }
    return 0;
}