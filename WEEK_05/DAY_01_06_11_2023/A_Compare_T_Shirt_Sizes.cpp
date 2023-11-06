#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        char aEnd = a.back();
        char bEnd = b.back();

        int aSize = a.size();
        int bSize = b.size();

        if (aEnd == bEnd)
        {
            if (aSize == bSize)
                cout << "=";
            else if (aEnd == 'S')
            {
                if (aSize < bSize)
                    cout << ">";
                else
                    cout << "<";
            }
            else
            {
                if (aSize < bSize)
                    cout << "<";
                else
                    cout << ">";
            }
        }
        else if (aEnd < bEnd)
            cout << ">";
        else
            cout << "<";

        cout << "\n";
    }
    return 0;
}