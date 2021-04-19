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
int sum_of(vector<int> arr, int size)
{
    int ans=0;
    for(int i=0; i<size; i++)
    {
        ans += arr[i];
    }
    return ans;
}
void solve() {
int n, m, cnt=0;
    cin >> n >> m;
    vector <int> a(n), b(m);
    fo(i, n)cin >> a[i];
    fo(i, m)cin >> b[i];
    int min = n>m?n:m;

    if(sum_of(a,n) > sum_of(b, m))
        cout << 0 << endl;
    else
    {
        while (min--)
        {
            swap(*max_element(b.begin(), b.end()), *min_element(a.begin(), a.end()));
            cnt++;
            if(sum_of(a,n) > sum_of(b, m))
            {
                cout << cnt << endl;
                return;
            }
        }
    }
    if(sum_of(a,n) <= sum_of(b,n))
        cout << -1 << endl;
    else
        cout << cnt << endl;
     
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