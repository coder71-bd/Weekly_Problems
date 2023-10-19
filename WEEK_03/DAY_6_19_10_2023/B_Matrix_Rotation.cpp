#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> a(4);
        for (int i = 0; i < 4; i++)
            cin >> a[i];
        int maxPos = max_element(a.begin(), a.end()) - a.begin();
        int minPos = min_element(a.begin(), a.end()) - a.begin();
        if (maxPos + minPos == 3)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
    return 0;
}