#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int tcase;
cin>>tcase;
for(int i=0; i<tcase;++i){
    int amount, limit;
    cin >> amount >> limit;
    vector<int>vec;
    for(int j=0; j<amount;++j){
        int x, p1, p2, total;
        cin >> x >> p1 >> p2;
 
        if(x<limit){
            total=p1+p2;
            if(total%2==0){
                vec.push_back(total);
            }
            else{
                --total;
                vec.push_back(total);
            } 
        }      
    }
 
    cout << "-1";
    
}
 
}
/*
Sebastian Roman 10% Solution
*/