#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll edge;
        cin >> edge;
        ll sum = 0;
        while (edge > 0)
        {
            sum += edge;
            edge = (edge >> 1);
        }
        cout << sum << "\n";
    }
    return 0;
}