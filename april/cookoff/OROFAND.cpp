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
//=======================

int scored(vi a, int n)
{
    int ans=1;
    for(int i=0; i<n; i++)
    {
        ans = ans & a[i];
    }
    return ans;
}

void solve() {
    int n,q,cnt=0;
    cin >> n >> q;
    int a[n];
    fo(i,n)cin >> a[i];
    int x[q], v[q];
    fo(i, q)
    {
        cin >> x[i];
        cin >> v[i];
    }
    vi score;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            for(int k=i; k<=j; k++)
            {
                cout << a[k]<< " ";
                score.push_back(a[k]);
                cnt++;
            }
            cout << "scored : " << scored(score, cnt) << endl;
            score.clear();
        }
    }
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