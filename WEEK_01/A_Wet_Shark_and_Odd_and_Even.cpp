#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int odd = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 2 != 0 && v[i] < odd)
            odd = v[i];
    }

    sort(v.begin(), v.end());

    long long int sum = 0;
    for (int i = 0; i < n; i++)
        sum += v[i];

    if (sum % 2 != 0)
        sum -= odd;

    cout << sum << "\n";
    return 0;
}