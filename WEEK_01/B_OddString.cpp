#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int n = s.size();
    string res = "";
    int i = 1;
    do
    {
        res += s[i - 1];
        i += 2;
    } while (i <= n);

    cout << res << "\n";

    return 0;
}