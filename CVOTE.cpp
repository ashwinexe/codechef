#include<bits/stdc++.h>
using namespace std;

void solve(int n, int m)
{
    unordered_map<string, string> map;
    unordered_map<string, int> name,country;
    for(int i=0; i<n; i++)
    {
        string n, c;
        cin >> n >> c;
        map[n] = c;
        name[n] = 0;
        country[c] = 0;
    }
    for(int i=0; i < m; i++)
    {
        string email;
        cin >> email;
        name[email]++;
        country[map[email]]++;
    }
    string win_country,winner;
    int max_country=0, max_name=0;
    for(auto it = country.begin(); it!=country.end(); it++)
    {
        if(it -> second > max_country)
        {
            max_country = it -> second;
            win_country = it -> first;
        }
        else if(it -> second == max_country)
        {
            if(win_country > it -> first)
                win_country = it -> first;
        }
    }

    for(auto it = name.begin(); it != name.end(); it++)
    {
        if(it -> second > max_name)
        {
            max_name = it -> second;
            winner = it -> first;
        }
        else if(it -> second == max_name)
            {
                if(it -> first < winner)
                    winner = it -> first;
            }
    }

    //for(auto i : name)
    //cout << i.first << " " << i.second << endl;

    cout <<win_country << endl << winner <<endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin >> n >> m;
    cout << ""; solve(n, m);

    return 0;   
}