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
//=======================
//=======================

void solve() {
  int n, k,x,y, cnt=0;
  cin >> n >> k >> x >> y;
  if(x == y)
  {
    cout << n << ' ' << n << endl;
  }

  else
  {
    int x1=0,x2=0,x3=0,x4=0,y1=0,y2=0,y3=0,y4=0;
    if(x > y) //below diagonal
    {
      x1 = n; //first strike
      y1 = n - x + y;
      x2 = y1;
      y2 = n;
      x3 = 0;
      y3 = n - x2;
      x4 = y3;
      y4 - 0;
    }
    else
    {
      x1 = n - y + x;
      y1 = n;
      x2 = n;
      y2 = x1;
      x3 = n - y2;
      y3 = 0;
      x4 = 0;
      y4 = x3;
    }
    // cout << x1 << ' ' << y1 << endl;
    // cout << x2 << ' ' << y2 << endl;
    // cout << x3 << ' ' << y3 << endl;
    // cout << x4 << ' ' << y4 << endl;

    int strike = k % 4;
    if(strike == 1)
    {
      x = x1; y = y1;
    }
    else if(strike == 2)
    { x = x2; y = y2;}
    else if(strike == 3)
    {x = x3; y= y3;}
    else if(strike == 0)
    {x = x4; y = y4;}
    // switch (strike)
    // {
    //   case 1:x = x1; y = y1; break;
    //   case 2:x = x2; y = y2; break;
    //   case 3:x = x3; y = y3; break;
    //   case 0:x = x4; y = y4; break;
    // }
    cout << x << ' ' << y << '\n';
  }
    return;


}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}