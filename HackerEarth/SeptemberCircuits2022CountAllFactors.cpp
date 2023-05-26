#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int tcase, f1;
cin>>tcase;
vector<int>vec;
 
for(int i=0; i<tcase;++i){
    cin >> f1;
    vec.push_back(f1);
}
int k;
cin >> k;
 
for(int i=0; i<k;++i){
    int count=0;
    cin >> f1;
 
    for(int j=2; j<=f1;++j){
        if(f1%j==0){
            for(int g=0; g<tcase;++g){
                if(j%vec[g]==0){
                    count+=1;
                }
            }
        }
    }
    cout << count << endl;
}
 
}
/*
Sebastian Roman 14% Solution
*/