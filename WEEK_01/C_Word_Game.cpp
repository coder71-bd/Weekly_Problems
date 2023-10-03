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
        map<string, int> mp;
        string v[3][n];

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string x;
                cin >> x;
                v[i][j] = x;
                mp[x]++;
            }
        }

        for (int i = 0; i < 3; i++)
        {
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                if (mp[v[i][j]] == 1)
                    count += 3;
                else if (mp[v[i][j]] == 2)
                    count++;
            }
            cout << count << " ";
        }

        cout << '\n';
    }
}