#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<long long int> v(n + 1, 0);
  for (int i = 1; i < n + 1; i++)
    cin >> v[i];

  vector<long long int> v2(v);

  sort(v2.begin(), v2.end());

  for (int i = 1; i < n + 1; i++)
  {
    v[i] += v[i - 1];
    v2[i] += v2[i - 1];
  }

  int m;
  cin >> m;
  while (m--)
  {
    int t, l, r;
    cin >> t >> l >> r;
    if (t == 2)
      cout << v2[r] - v2[l - 1] << "\n";
    else
      cout << v[r] - v[l - 1] << "\n";
  }
  return 0;
}