#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        bool flag = false;
        set<int> st;

        for (int i = n - 1; i >= 0; i--)
        {
            if (st.count(v[i]) > 0)
            {
                cout << i + 1 << endl;
                flag = true;
                break;
            }
            st.insert(v[i]);
        }

        if (!flag)
            cout << 0 << "\n";
    }
    return 0;
}