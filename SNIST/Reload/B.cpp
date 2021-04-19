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
    string s;
    cin >> s;
    float cal=0.0;
    for(auto x : s)
    {
        if( x == 'D')
        cal += 238;
        if( x == 'T')
        cal += 244;
        if(x == 'M')
        cal += 138;
        if(x == 'B')
        cal +=279;
        if(x == 'C')
        cal += 186;
    }
    int km=0, run=0, cyc=0, walk =0;
    while(cal)
    {  
        if(cal >= 50)
        {
            run ++;
            cal -= 50;
        }
        else if(cal >= 5)
        {
            cyc++;
            cal -= 5;
        }
        else
        {
            walk++;
            cal -= 0.5;
        }
    }
    cout << run << endl << cyc << endl << walk << endl;
     
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    while(t--) {
      solve();
    }

    return 0;
}