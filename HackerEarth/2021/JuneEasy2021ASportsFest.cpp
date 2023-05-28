#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int tcase, size, num;
cin>>tcase;
for(int i=0; i<tcase;++i){
    cin >> size;
    vector<int>t1,t2;
    for(int j=0; j<size;++j){
        cin >> num;
        t1.push_back(num);
    }
    for(int j=0; j<size;++j){
        cin >> num;
        t2.push_back(num);
    }
    cout << t1[0]+t1[size-1]-t2[0] <<endl;
}
 
}
/*
Sebastian Roman 14% Solution
*/