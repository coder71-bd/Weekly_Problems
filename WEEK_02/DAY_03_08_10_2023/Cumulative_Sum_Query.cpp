#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int q;
    cin >> q;
    while (q--)
    {
        int i, j;
        cin >> i >> j;
        int sum = 0;
        for (i; i <= j; i++)
            sum += v[i];
        cout << sum << "\n";
    }
    return 0;
}