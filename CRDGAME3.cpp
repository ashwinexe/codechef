#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(int i=a; i<b; i++)

void solve()
{
    int pc,pr,cntc=0,cntr=0,ans=0;
    cin >> pc >> pr;

    for(int i=9; i>0; i--)
    {
        while(ans < pc)
        {
            ans += i;
            cntc++;
        }
    }

    ans = 0;

    for(int i=9; i>0; i--)
    {
        while(ans < pr)
        {
            ans += i;
            cntr++;
        }
    }

    if(cntc < cntr)
    {
        cout << 0 << ' ' << cntc << '\n';
    }

    else
    {
        cout << 1 << ' ' << cntr << '\n';
    }
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    
}