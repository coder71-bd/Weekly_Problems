#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int nums[n];

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    map<int, int> mp;

    for (int num : nums)
        mp[num]++;

    for (const auto &pair : mp)
    {
        if (pair.second == 1)
            cout << pair.first << "\n";
    }

    return 0;
}