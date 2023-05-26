#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int tcase;
cin>>tcase;
for(int i=0; i<tcase;++i){
    int size, mode;
    cin >> size >> mode;
    map<int, int> store;
    for(int p=0; p<size;++p){
        int num;
        cin >> num;
        ++store[num];
    }
    //biggest number
    int temp=0, tempFirst, kMax;
    for(auto x : store){
        if(temp<x.second){
            temp = x.second;
            tempFirst =x.first;
        }
        if(x.first==mode){
            kMax=x.second;
        }
    }
    //2nd biggest number or same
    int temp2Num=kMax;
    for(auto x : store){
        if(temp2Num <= x.second && x.first!=mode && temp>=x.second && tempFirst!=x.first){
            temp2Num = x.second;
        }
    }
    int ans;
    if(mode==tempFirst){
        cout << 0 <<endl;
    }
    else{
        ans = temp - kMax;
        ++kMax;
        if(kMax==temp2Num){
            ++ans;
        }
        cout << ans <<endl;
    }
    //cout << tempFirst << ',' << temp << ',' << kMax << ',' << temp2Num <<endl;
}
 
}
/*
Sebastian Roman 7% Solution
*/