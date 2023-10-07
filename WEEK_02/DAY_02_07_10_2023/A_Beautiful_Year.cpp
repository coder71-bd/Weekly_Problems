#include <bits/stdc++.h>
using namespace std;

int isDistinct(int n)
{
    int x1 = n % 10;
    n /= 10;
    int x2 = n % 10;
    n /= 10;
    int x3 = n % 10;
    n /= 10;
    int x4 = n % 10;

    return x1 != x2 && x1 != x3 && x1 != x4 && x2 != x3 && x2 != x4 && x3 != x4;
}

int main()
{
    int n;
    cin >> n;

    while (n++)
    {
        if (isDistinct(n))
        {
            cout << n << "\n";
            break;
        }
    }

    return 0;
}