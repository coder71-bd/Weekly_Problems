#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        long long sum = 0;
        long long temp, eC = 0, oC = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (temp % 2 == 0)
            {
                eC++;
                sum += temp;
            }
            else
            {
                oC++;
                sum += temp;
            }
        }

        while (q--)
        {
            int m, value;
            cin >> m >> value;

            if (m == 1)
            {
                sum += oC * value;

                if (value % 2 != 0)
                {
                    eC += oC;
                    oC = 0;
                }
            }
            else
            {
                sum += (eC * value);
                if (value % 2 != 0)
                {
                    oC += eC;
                    eC = 0;
                }
            }

            cout << sum << "\n";
        }
    }
    return 0;
}