#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int mx = 0;
    int res = 2;
    for (int j = 2; j <= 1000; j++)
    {
        int count = 0;
        for (int k = 0; k < n; k++)
        {
            if (arr[k] % j == 0)
                count++;
        }

        if (count > mx)
        {
            mx = count;
            res = j;
        }
    }

    cout << res << "\n";

    return 0;
}