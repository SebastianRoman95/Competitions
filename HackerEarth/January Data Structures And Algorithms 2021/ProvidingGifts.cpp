#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long int tcase=0, size=0;
cin>>tcase;
 
for(int i=0; i<tcase;++i){
    cin>> size;
    if(size%2==0){
        cout << size/2 <<endl;
    }
    else{
        cout << size/2+1 <<endl;
    }
    
}
}
/*
Sebastian Roman 100% Solution
*/