#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int tcase, num1;
cin>>tcase >> num1;
vector<int> vec;
for(int i=0; i<tcase;++i){
        int num;
        cin >> num;
        vec.push_back(num);
}
 
for(int i=0; i<tcase;++i){
    for(int j=i+1; j<tcase;++j){
        if(abs(vec[i]-vec[j])>num1-1){
            swap(vec[i],vec[j]);
        }
    }
}
    for(int i=0; i<tcase;++i){
        cout << vec[i] <<  ' ';
    }
 
}
/*
Sebastian Roman 5% Solution
*/