#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long int tcase=0, size=0, amount=0, num=0;
cin>>tcase;
 
for(int i=0; i<tcase;++i){
    cin>>size >> amount;
    set<int>values;
    
    for(int b=0;b<size;++b){
        cin>> num;
        values.insert(num);
    }
    long long int total=0;
    
    set<int>::reverse_iterator rvalues;
    for(rvalues = values.rbegin(); rvalues != values.rend(); ++rvalues){
 
        if(amount==0)
        {
            break;
        }
        else{
            total+=*rvalues;
            --amount;
        }
        
    }
    cout << total<<endl;
}
}
/*
Sebastian Roman 6% Solution
*/