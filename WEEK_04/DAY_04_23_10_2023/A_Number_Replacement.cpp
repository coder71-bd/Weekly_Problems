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

        string str;
        cin >> str;

        bool flag = true;
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
                if (v[i] == v[j] && str[i] != str[j])
                    flag = false;

        if (flag)
            cout << "YES";
        else
            cout << "NO";

        cout << "\n";
    }
    return 0;
}