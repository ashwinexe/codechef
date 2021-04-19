#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k,min=100;
    cin >> n >> k;
    vector <int> p (n);
    for(int i=0; i<n; i++)
    {
        cin >> p[i];
    }
    vector <int> ans;
    sort(p.begin(), p.end());
    for(auto x : p)
    {
        if (k % x == 0)
        {
            ans.push_back(k/x);
        }
    }
    if(ans.empty())
    {
        cout << -1 << '\n';
        return;
    }

    sort(ans.begin(), ans.end());
    cout << k/ans[0] << '\n';
    return;

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