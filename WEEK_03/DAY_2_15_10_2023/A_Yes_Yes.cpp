#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
        string s;
        cin >> s;

        int j = s.size();
        int found = false;
        for (int i = 0; i <= 51 && j <= 51; i++)
        {
            string comp = str.substr(i, j);
            if (comp == s)
            {
                found = true;
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