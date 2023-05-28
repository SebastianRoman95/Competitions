#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int tcase=0;
cin >> tcase;
 
for(int i=0;i<tcase;++i){
    int n=0, t=0, c=0, f=0;
    cin >> n;
    vector<int> d;
    for(int b=1;b<=n;++b){
    c += b;
    } 
    for(int b=1;b<=n;++b){
    f += __gcd(c,b);
    d.push_back(f);
    }
    cout << c << ' ' << *max_element(d.begin(), d.end()) <<endl;
}
}
/*
Sebastian Roman 1% Solution
*/