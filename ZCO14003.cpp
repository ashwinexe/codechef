#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,max=0,ans=0;
    cin >> n;
    vector <int> a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];    
    }
    sort(a.begin(), a.end());
    for(int i=0; i<n; i++)
    {
        max = a[i]*(n-i);
        if(ans < max)
            ans = max;
    }
    cout << ans <<'\n';
    
}