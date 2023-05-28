#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int tcase, size, num, small1, small2;
cin>>tcase;
for(int i=0; i<tcase;++i){
    cin >> size;
    vector<int> vec;
 
    for(int j=0; j<size;++j){
    cin >> num;
    vec.push_back(num);
    }
 
    sort(vec.begin(), vec.end());
    small1=vec[0];
    small2=vec[1];
    for(int j=2; j<size;++j){
        if(small1==small2){
            small2=vec[j];
        }
        else{
            break;
        }
    }
    cout << '3' <<endl;
    cout << small1 << ' ' << small2 << ' ' << size-1 <<endl;
}
 
}
/*
Sebastian Roman 16.7% Solution
*/