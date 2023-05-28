#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int tc=0, numlength=0, numtem=0;
cin>>tc;
 
//test case
for(int i=0; i<tc;++i){
    numlength=0;
    cin >> numlength;
    map<int, vector<int>>match;
    vector<int>numhold(numlength);
 
//storing
    for(int p=0; p<numlength; ++p){
        cin >> numtem;
        numhold[p]=numtem;
        match[numtem].push_back(p+1);
    }
   
   //sum
    int sum=0;
    for(auto m:match){
        sum+=m.second.back() - m.second.front();
    }
    cout << sum << endl;
}
}
/*
Sebastian Roman 100% Solution
*/