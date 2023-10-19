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
        string str;
        cin >> str;
        long long count = 0;
        vector<long long> v;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'L')
            {
                v.push_back((n - 1 - i) - i);
                count += i;
            }
            else
            {
                v.push_back(i - (n - 1 - i));
                count += n - 1 - i;
            }
        }

        sort(v.begin(), v.end(), greater<int>());

        for (int i = 0; i < n; i++)
        {
            if (v[i] > 0)
                count += v[i];
            cout << count << ' ';
        }

        cout << '\n';
    }
    return 0;
}