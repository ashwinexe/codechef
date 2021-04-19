#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll g;
    cin >> g;
    while(g--)
    {
        ll i,n,q;
        cin >> i >> n >> q;
        vector <string> coins(n);

        for(int j=0; j<n; j++)
        {
            if(i == 1)
                coins[j] = "H";
            else
                coins[j] = "T";
        }


        for(int j=0; j<n; j++)
        {
            if(j%2 == 0)
            {
                if(coins[j] == "H")
                    coins[j] = "T";

                else
                    coins[j] = "H";
            }
        }

            if(q == 1)
            {
                cout << count(coins.begin(), coins.end(), "H");
            }

            else
            {
                cout << count(coins.begin(), coins.end(), "T");
            }
            cout << '\n';
            
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}