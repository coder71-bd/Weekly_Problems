#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int k;
    cin >> k;
    int count = 0;
    while (t--)
    {
        int x;
        cin >> x;
        int isDivisible = x % k == 0;
        if (isDivisible)
            count++;
    }
    cout << count << "\n";
    return 0;
}