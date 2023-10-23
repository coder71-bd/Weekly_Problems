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
        string s;
        for (int i = 9; i >= 1; i--)
        {
            if (n >= i)
            {
                char x = '0' + i;
                s = x + s;
                n -= i;
            }
        }

        cout << s << "\n";
    }
    return 0;
}