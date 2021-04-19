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

void solve() {
    int d1,v1,d2,v2, p;
    cin >> d1 >> v1 >> d2 >> v2 >> p;
    // return;
    int day=1, sol=0;
    if(p == 0)
    {
        cout << 1 << endl;
        return;
    }

    // if(d1 == d2)
    // {
    //     if( p%(v1+v2) == 0)
    //         cout << p/(v1+v2) << '\n';
    //     else
    //         cout << p/(v1+v2) + 1 << '\n';
    //     return;
    // }
    while(sol < p)
    {
        if(day >= d1)
            sol += v1;
        if(day >= d2);
            sol += v2;
        day++;
    }

    cout << day-1 << '\n';
     
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    while(t--) {
      solve();
    }

    return 0;
}