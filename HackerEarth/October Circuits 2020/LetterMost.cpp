#include<bits/stdc++.h>
#include<algorithm> 
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int lim, mv;
string str; 

unordered_map<char, int> mp;
cin >> lim;
cin >> str;

for(int i=0; i <lim;i++){
    mp[str[i]]++;
}

for(auto x : mp){
    mv = max(mv, x.second);
}

cout << mv;

}
/*
Sebastian Roman 100% Solution
*/