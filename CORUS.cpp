#include<bits/stdc++.h>
using namespace std;

string uni(string a) {
    unordered_map<char, int> u;
    string ans;
    for(char i:a)
    {
        u[i]++;
        if(u[i] == 1)
            ans += i;
    }
    return ans;
}

int main()
{
    int t,c,n,q;
    cin >> t;
    while(t--)
    {
        cin >> n >> q;
        string S;
        cin >> S;
        unordered_map<char, int> a;
        for(char i : S)
            a[i]++; //counts no of reptition of each letter

        string un = uni(S);
        while(q--)
        {
            int sum=0;
            cin >> c;
            for(char i : un) {
                if(a[i] >= c)
                sum += a[i]-c;
            }
            cout << sum << endl;
        }
        return 0;
    }
}