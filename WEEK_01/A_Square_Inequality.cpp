#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    bool res = (pow(a, 2) + pow(b, 2)) < pow(c, 2);
    if (res)
        cout << "Yes"
             << "\n";
    else
        cout << "No"
             << "\n";

    return 0;
}