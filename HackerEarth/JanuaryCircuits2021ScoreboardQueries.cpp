#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int tcase=0;
cin >> tcase;
for(int i=0; i<tcase;++i){
    int n=0, q=0, temNum=0;
    vector<int>vec;
    cin >>n >> q;
    for(int b=0;b<n;++b){
        cin >> temNum;
        vec.push_back(temNum);
    }
    int l=0, r=0;
    cin >> l >> r;
    sort(vec.begin(),vec.end());
    int c=0, d=0;
    c = n-q;
    //cout << c << "nani";
    for(int b=n-1;b>=c;--b){
        cout << vec[b] <<endl;
    }
    
}
}
/*
Sebastian Roman 1% Solution
*/