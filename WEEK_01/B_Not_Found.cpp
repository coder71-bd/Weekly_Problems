#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    vector<int> alphabets;
    int c = 'a';
    while (c <= 'z')
        alphabets.push_back(c++);

    for (int i = 0; i < n; i++)
    {
        int pos = s[i] - 'a';
        alphabets[pos] = -1;
    }

    char found = '\0';

    for (int i = 0; i < 26; i++)
    {
        if (alphabets[i] != -1)
        {
            found = alphabets[i];
            break;
        }
    }

    if (found == '\0')
        cout << "None"
             << "\n";
    else
        cout << found << "\n";

    return 0;
}