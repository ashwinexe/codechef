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
bool found=true;;
string manup(string s,int n)
{
    if(found == false)
        return s;
    found = false;
    int cnt = 1, a, b;
    bool first = true;

    for(int i=0; i<s.length()-1; i++)
    {
        if(s[i] == s[i+1])
        {
            cnt++;
            if(first == true)
            {
                a = i;
                first = false;
            }
        }
        if(cnt == n)
        {
            found = true;
            b=i+1;
            s.erase(a, b-a);
            cnt=1;
            first = true;
        }
        else
        {
            first=true;
            // cnt=1;
        }
    }
    manup(s, n);
    

    return s;
}

void solve() {
    int n,cnt=0;
    string s;
    cin >> s;
    cin >> n;

    cout << manup(s,n) << endl;
    
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    while(t--) {
      solve();
    }

    return 0;
}