#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int i = 0;
    int count = 0;
    while (i < n - 2)
    {
        if (s[i] != 'A')
        {
            i++;
            continue;
        }

        string word = "";
        word += s[i];
        word += s[i + 1];
        word += s[i + 2];

        if (word == "ABC")
            count++;

        i++;
    }
    cout << count << "\n";
    return 0;
}