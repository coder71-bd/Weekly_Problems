#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string piDig = "31415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
        string s;
        cin >> s;

        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            int num1 = piDig[i] - '0';
            int num2 = s[i] - '0';
            if (num1 != num2)
                break;
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}