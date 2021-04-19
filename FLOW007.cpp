#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(int i=a; i<b; i++)

void solve()
{
    string input;
    cin >> input;
    int len = input.size();
    vector<string> s (len);
    for(int i=0; i<len; i++)
    {
        char a = input[i];
        s[i] = a;
    }
    vector <string> left,right;
    int size = s.size();
    if(size % 2 == 0)
    {
        for(int i=0; i<(size)/2; i++)
        {
            left.push_back(s[i]);
        }
        for(int i=(size)/2; i<size - 1; i++)
        {
            right.push_back(s[i]);
        }
    }

    else
    {
        for(int i=0; i<size/2; i++)
            left.push_back(s[i]);

        for(int i=size/2 + 1; i<size - 1; i++)
            right.push_back(s[i]);
    }

    sort(left.begin(), left.end());
    sort(right.begin(), right.end());

    for(auto x : left)
        cout << x;
        cout << endl;

    for(auto x : right)
        cout << x;
        cout << endl;    
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