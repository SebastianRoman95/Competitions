#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int tcase, size, num;
cin>>tcase;
for(int i=0; i<tcase;++i){
    cin >> size;
    vector<int> vec;
    for(int i=0; i<size;++i){
        cin >>num;
        vec.push_back(num);
    }
    cout << size <<endl;
}
 
}
/*
Sebastian Roman 10% Solution
*/