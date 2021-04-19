#include<bits/stdc++.h>
using namespace std;
int main(){ 
    map<string, string> umap;
    umap["first"] = "1";
    umap["second"] = "2";
    umap["third"] = "3";
    umap["fourth"] = "4";
    umap["fifth"] = "5";

    

    for(auto i : umap)
    cout << i.first << " " << i.second << endl;
}