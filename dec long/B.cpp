#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef vector<int>		vi;
typedef vector<pii>		vpii;
typedef vector<vi>		vvi;
//=======================
const int MOD = 1000000007;
const int N = 2e6+13, M = N;
//=======================
vi g[N];
int a[N];
int n, m, k;
//=======================

void solve_naive() {
  cin >> n >> m;
  int cnt=0;
  for(int i=1; i<=n; i++)
  {
      for(int j=1; j<=m; j++)
      {
          if((i+j)%2 == 0)
            cnt++;
      }
  }
  cout << cnt << '\n';
     
}

void solve_fast()
{
    cin >> n >> m;
    int n_odd=0, n_even=0,m_odd=0, m_even=0;
    for(int i=1; i<=n; i++)
    {
        if(i&1)n_odd++;
        if(!(i&1))n_even++;
    }
    for(int i=1; i<= m; i++)
    {
        if(i&1)m_odd++;
        else m_even++;
    }
    cout << (n_odd*m_odd)+(n_even*m_even) << '\n';
return;
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    cin >> t;
    while(t--) {
      solve_fast();
    }

    return 0;
}