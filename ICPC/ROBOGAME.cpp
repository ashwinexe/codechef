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
    int n, m, cnt=0;
    string s;
    cin >> s;
    vi a;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] != '.')
        {
            int value= s[i] - '0';
            // deb(s[i]);
            if(value > i)
            {
                a.push_back(0);
                a.push_back( value + i);
                int temp= value;
            }

            else if(value + i >= s.length())
            {
                // cout << "elif";
                a.push_back(abs(i- value));
                a.push_back(s.length()-1);
            }

            else
            {
                // cout << "else";
                a.push_back(abs(i- value));
                a.push_back(value + i);
            }
            
        }
    }
    if(a.empty())
    {
        cout << "safe\n";
        return;
    }
    vi b = a;
    auto it = unique(a.begin(), a.end());
    a.resize(distance(a.begin(),it));
    if(a == b)
    {
        cout << "safe\n";
    }
    else
        cout << "unsafe\n";
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