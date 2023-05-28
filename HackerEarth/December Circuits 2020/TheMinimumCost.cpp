#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
long long int tcase=0, coinnum=0, coin=0, cost0=0, cost1=0;
 
cin >> tcase;
for(int i=0; i<tcase;++i){
    cin >> coinnum >> cost0 >> cost1;
    long long int coins[coinnum];
    vector<long long int>vec(coinnum), vec2(coinnum);
 
//org vec
    for(int c=0; c<coinnum;++c){
        cin >> coin;
        coins[c]=coin;  
    }
 
    //0 & 1
    vec[0]=1;
    vec2[0]=0;
    for(int v=1; v<coinnum;++v){
        
        if(vec[v-1]==0){
            vec[v]=1;
        }
        else {
            vec[v]=0; 
        }
        if(vec2[v-1]==0){
            vec2[v]=1;
        }
        else{
            vec2[v]=0;
        }
    }
 
    //how much 
    long long int total0=0, total1=0;
    for(int c=0; c<coinnum;++c){
        if(coins[c]==vec[c]){
        }
        else {
            if(vec[c]==1){
                total0+=cost0;
            }
            else {
                total0+=cost1;
            }
        }
        if(coins[c]==vec2[c]){
        }
        else {
            if(vec2[c]==1){
                total1+=cost0;
            }
            else{
                total1+=cost1;
            }
        }
    }
 
//print mini
    if(total0<total1){
        cout << total0 <<endl;
    }
    else{
        cout << total1 <<endl;
    }
}
}
/*
Sebastian Roman 100% Solution
*/