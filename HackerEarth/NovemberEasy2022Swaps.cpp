#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int tcase;
cin>>tcase;
for(int i=0; i<tcase;++i){
    vector<int>vec;
    int vecSize, num;
    cin>> vecSize;
    for(int j=0; j<vecSize;++j){
        cin >> num;
        vec.push_back(num);
    }
    sort(vec.begin(),vec.end());
    for(int j=0; j<vecSize;++j){
        cout << vec[j] << ' ';
    }
    cout << endl;
}
 
}
/*
Sebastian Roman 100% Solution
*/