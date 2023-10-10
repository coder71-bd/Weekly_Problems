#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return false;

    int size = sqrt(n);

    for (int i = 2; i <= size; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        int n = i;
        int c = 0;
        for (int j = 2; j <= n; j++)
        {
            if (n % j == 0 && isPrime(j))
            {
                c++;
                while (n % j == 0)
                    n /= j;
            }
        }

        if (c == 2)
            count++;
    }

    cout << count << "\n";
    return 0;
}