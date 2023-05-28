#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int tcase;
cin>>tcase;
for(int i=0; i<tcase;++i){
    int size, temp;
    vector<int>vec;
    cin >> size;
    for(int i=0; i<size;++i){
        cin >> temp;
        vec.push_back(temp);
        if(i==0){
            if(temp==0){
                cout << temp+1 << endl;
                break;
            }
        }
        if(temp>=size){
            cout << "-1" << endl;
        }
    }
 
 
 
}
 
}
/*
Sebastian Roman 10% Solution
*/