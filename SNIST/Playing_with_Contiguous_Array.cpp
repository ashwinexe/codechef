#include<bits/stdc++.h>
#include<iostream>
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

void diamond(int n)
{

   int i, j, half;
   // cin >> n;
   if(n %2 == 1) { 
      n++;
   }
   half = (n/2);
   for(i = 1; i<= half; i++) {
      for(j = 1; j<=(half-i); j++) { 
         cout << " ";
      }
      if(i == 1) {
         cout << "x";
      }else{
         cout << "x"; 
         for(j = 1; j<=2*i-3; j++) { 
            cout << " ";
         }
         cout << "x";
      }
      cout << endl;
   }
   for(i = half+1; i<n; i++) {
      for(j = 1; j<=i-half; j++) { 
         cout << " ";
      }
      if(i == n-1) {
         cout << "x";
      }
      else{
         cout << "x"; 
         for(j = 1; j<=2*(n - i)-3; j++) { 
            cout << " ";
         }
         cout << "x";
      }
      cout << endl;
   }
}

void solve() {
  cin >> n;
  int a[n];
  int cnt=1,mx=-1;
  for(int i=0; i<n; i++)
  {
      cin >> a[i];
  }
  int diff;
    diff = (a[1] - a[0]);
  for(int i=0; i<n - 1; i++)
  {
      if(a[i + 1] - a[i] == diff)
      {
          cnt++;
      }

    else
      {
          cnt = 1;
      }
    mx = max(mx, cnt);
      diff = a[i + 1] - a[i];
  }
  int ans = mx;
     cout << ans << '\n';
if (ans%2 == 0)
    ans = ans - 1;
     diamond(ans);
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    while(t--) {
      solve();
    }

    return 0;
}