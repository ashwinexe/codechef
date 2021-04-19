#include<bits/stdc++.h>
using namespace std;
#define ll long long
int sum_to(int n)
{
    return (n*(n+1))/2;
}

void solve()
{
    int n;
    ll ans=1;
    cin >> n;
    int count=1;
    int current,prev;
    cin >> prev;
    for(int i=1 ; i<n; i++)
    {
        cin >> current;
        if(current >= prev)
        {
            count++;
            ans+=count;
        }
        else
        {
            count = 1;
            ans++;
        }
        prev = current;
    }

    cout <<ans<< '\n';


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