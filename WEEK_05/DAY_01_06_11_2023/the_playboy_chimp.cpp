#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int m;
    cin >> m;
    vector<int> q(m);
    for (int i = 0; i < m; i++)
        cin >> q[i];

    for (int i = 0; i < m; i++)
    {
        int k = q[i];

        auto iU = upper_bound(v.begin(), v.end(), k);
        auto iL = lower_bound(v.begin(), v.end(), k);

        if (iL != v.begin())
            iL--;
        else
            iL = v.end();

        if (iL == v.end())
            cout << "X ";
        else
            cout << *iL << " ";

        if (iU == v.end())
            cout << "X"
                 << "\n";
        else
            cout << *iU << "\n";
    }

    return 0;
}