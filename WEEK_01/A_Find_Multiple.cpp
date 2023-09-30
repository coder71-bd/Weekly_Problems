#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (c > a && c > b)
        cout << -1 << "\n";
    else if (c >= a && c <= b)
        cout << c << "\n";
    else
    {
        int start = a / c;
        if (!start)
            start++;

        int numberFound = -1;
        while (true)
        {
            c *= start;
            start++;

            if (c >= a && c <= b)
            {
                numberFound = c;
                break;
            }

            if (c > b)
                break;
        }

        if (numberFound != -1)
            cout << numberFound << "\n";
        else
            cout << -1 << "\n";
    }
    return 0;
}