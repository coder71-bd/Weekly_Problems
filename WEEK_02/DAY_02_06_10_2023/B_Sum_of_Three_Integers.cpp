#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, s;
    cin >> k >> s;

    int count = 0;
    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            int res = s - i - j;
            if (res >= 0 && res <= k)
                count++;
        }
    }

    cout << count << "\n";

    return 0;
}