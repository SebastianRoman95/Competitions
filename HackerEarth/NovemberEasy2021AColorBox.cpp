#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int tcase;
cin>>tcase;
for(int i=0; i<tcase;++i){
    vector<int>ali;
    vector<int>bob;
    int vecS, num;
    cin >>vecS;
    //ali
    for(int b=0; b<vecS;++b){
        cin >> num;
        ali.push_back(num);
    }
    //bob
    for(int b=0; b<vecS;++b){
        cin >> num;
        bob.push_back(num);
    }
 
    int total, ans=0;
    bool YeNo = false;
    for(int b=0; b<vecS;++b){
        total=ali[b]-bob[b];
        //cout << total << ' ';//leftover
        if(total>=0){
            if(total>1){
                total=total/2;
                if(b+1<=vecS){
                    ans+=total;
                }
            }
        }
        else{
            ans+=total;   
        }
        //cout << ans <<endl;    
    }
    if(ans>=0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" <<endl;
    } 
}
 
}
/*
Sebastian Roman 100% Solution
*/