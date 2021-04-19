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
      int p,s;  
      cin >> p >> s;
      double b = (p - sqrt(p*p-24*s))/12.0;
      double l = p/4 - 2*b;
      cout << setprecision(2) << fixed << l*b*b << '\n';

  }
  
}
