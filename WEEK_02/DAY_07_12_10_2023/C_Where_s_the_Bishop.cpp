#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char arr[9][9];
        for (int i = 1; i <= 8; i++)
        {
            for (int j = 1; j <= 8; j++)
                cin >> arr[i][j];
        }

        for (int i = 2; i <= 7; i++)
        {
            for (int j = 2; j <= 7; j++)
            {
                if (arr[i][j] == '#' && arr[i - 1][j - 1] == '#' && arr[i - 1][j + 1] == '#' && arr[i + 1][j - 1] == '#' && arr[i + 1][j + 1] == '#')
                {
                    cout << i << ' ' << j << '\n';
                    break;
                }
            }
        }
    }
    return 0;
}