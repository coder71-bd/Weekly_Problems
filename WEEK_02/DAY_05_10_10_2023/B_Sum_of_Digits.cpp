#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    long long int count = 0;

    while (str.size() > 1)
    {
        long long int sum = 0;
        string sumStr = "";

        for (char x : str)
            sum += (x - '0');

        while (sum > 0)
        {
            char x = (sum % 10) + '0';
            sumStr = x + sumStr;
            sum /= 10;
        }

        str = sumStr;
        count++;
    }

    cout << count << "\n";
    return 0;
}