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
//=======================

int balance(vi a, vi b, int x, int y)
{
    while(x!=y && x>0 && y>0)
    {

        if(x > y)
        {
            x -= a.back();
            a.pop_back();
        }

        else if(x < y)
        {
            y -= b.back();
            b.pop_back();
        }
    }
    if(x==y)
        return x;
    else 
        return -1;    


}

void solve() {
    int n, m, cnt=0;
    cin >> n >> m;
    vi a(n), b(m);
    int sum_a=0, sum_b=0;
    int x;
    fo(i, n)
    {
        cin >> a[i];
        sum_a += a[i];
    }
    fo(i, m)
    {
        cin >> b[i];
        sum_b += b[i];
    }

    int ans = balance(a, b, sum_a, sum_b);
    if(ans>=0)
        cout << ans << endl;
    else
        cout << "Not possible\n";
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    while(t--) {
      solve();
    }

    return 0;
}