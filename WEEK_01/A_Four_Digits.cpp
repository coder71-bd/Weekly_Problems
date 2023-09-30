#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 0)
        cout << "0000"
             << "\n";
    else
    {
        int digits = 0;
        for (int i = n; i > 0; digits++)
            i /= 10;
        int zeroRequired = 4 - digits;

        if (zeroRequired > 0)
        {
            string str = "";
            for (int i = 0; i < zeroRequired; i++)
                str.append("0");
            str.append(to_string(n));
            cout << str << "\n";
        }
        else
            cout << n << "\n";
    }
    return 0;
}