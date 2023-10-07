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
        string a, b;
        cin >> a >> b;

        bool found = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'G')
            {
                if (b[i] != 'B' && b[i] != 'G')
                {
                    found = false;
                    break;
                }
            }
            else if (a[i] == 'B')
            {
                if ((b[i] != 'B' && b[i] != 'G'))
                {
                    found = false;
                    break;
                }
            }
            else if (a[i] != b[i])
            {

                found = false;
                break;
            }
        }

        if (found)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
    return 0;
}