#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    bool flag = false;

    for (int i = 0; i < (1 << n); i++)
    {
        int sum = 0;

        for (int j = 0; j < n; j++)
        {
            int mask = 1 << j;
            if ((i & mask) == 0)
                sum -= v[j];
            else
                sum += v[j];
        }

        if (sum % 360 == 0)
        {
            flag = true;
            break;
        }
    }

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}