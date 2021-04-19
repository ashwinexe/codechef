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
//=======================

void solve() {
    int n, m, cnt=0;
    cin >> n >> m;
    int mini = min(n, m);
    int sum_of_a=0, sum_of_b=0;
    vi a(n), b(m);
    for(auto &x : a)
    {
        cin >> x;
        sum_of_a += x;
    } 
    for(auto &x : b){
        cin >> x;
        sum_of_b += x;
    } 
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());
    for(int i=0; i<mini; i++)
    {
        if(sum_of_a > sum_of_b)
        {
            cout << cnt << '\n';
            return;
        }
        sum_of_a += b[i] - a[i];
        sum_of_b -= b[i] - a[i];
        swap(a[i], b[i]);
        cnt++;
    }
    if(sum_of_a > sum_of_b)
        {
            cout << cnt << '\n';
            return;
        }
    cout << -1 << '\n';
     
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