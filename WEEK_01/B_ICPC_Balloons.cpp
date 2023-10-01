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
        vector<int> v;
        for (int i = 0; i < 26; i++)
            v.push_back(0);

        int total = 0;

        for (int i = 0; i < n; i++)
        {
            char x;
            cin >> x;
            int pos = x - 'A';

            if (v[pos] == 0)
            {
                total += 2;
                v[pos] += 2;
            }
            else
            {
                total++;
                v[pos]++;
            }
        }

        cout << total << "\n";
    }
    return 0;
}