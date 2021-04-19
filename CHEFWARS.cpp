#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int h,p;
    cin >> h >> p;
    while(h > 0 && p > 0)
    {
        h = h - p;
        p = p/2;
    }

    if(h <= 0)
    {
        cout << 1 << '\n';
        return;
    }

    else
    {
        cout << 0 << '\n';
        return;
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