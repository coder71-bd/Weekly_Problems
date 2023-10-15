#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v(4);

        for (int i = 0; i < 4; i++)
            cin >> v[i];

        pair<int, int> mx = {-1, INT_MIN};
        pair<int, int> mn = {-1, INT_MAX};
        for (int i = 0; i < 4; i++)
        {
            if (v[i] > mx.second)
                mx = {i, v[i]};
            if (v[i] < mn.second)
                mn = {i, v[i]};
        }

        if (mx.first + mn.first == 3)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
    return 0;
}