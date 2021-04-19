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

void solve() {
    string s;
    cin >> s;
    int mid;
    int cnt=0;
    if(s.size()&1)
    {
        mid = s.size()/2;
        int i=mid+1, j=mid-1;
        while(j>=0)
        {
            cnt += abs(s[i] - s[j]);
            i++;
            j--;
        }
    }
    else
    {
        mid = s.size()/2;
        int i=mid-1, j=mid;
        while (i>=0)
        {
            cnt += abs(s[i] - s[j]);
            i--;
            j++;
        }
    }
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