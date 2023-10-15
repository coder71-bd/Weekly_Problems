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
        cin >> s;

        set<string> v;

        for (int i = 1; i < n; i++)
        {
            string str = "";
            str += s[i - 1];
            str += s[i];
            v.insert(str);
        }

        cout << v.size() << "\n";
    }
    return 0;
}