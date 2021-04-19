#include<bits/stdc++.h>
using namespace std;

void solve(){
    int l, b;
    cin >> l >> b;
    int  gcd;
    for(int i=1; i <=l && i <=b; i++)
    {
        if(l%i == 0 && b%i == 0)
            gcd = i;
    }
    cout << gcd <<endl;
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