#include<bits/stdc++.h>
#define ll long long
using namespace std;
int max = 1e9 + 7;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
      int n;
      cin >> n;
      cout << n << '\n';
      for(int i=0; i<n; i++)
      {
          cout << n << '\n';
          for(int j=1; j<=n; j++)
          {
              cout << j <<' '<< (i+j) % n + 1 <<' '<<(i + j + 1) % n + 1 << '\n';
          }
      }
  }
  return 0;
}
