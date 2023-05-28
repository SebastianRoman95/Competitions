#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int tcase;
cin>>tcase;
for(int i=0; i<tcase;++i){
    long long int num, total, tot;
    cin >> num;
    if(num==1){
        tot=1;
    }
    else if(num==2){
        tot=4;
    }
    else if(num==3){
        tot=10;
    }
    else{
        total=num-2;
        tot=total*9;
    }
    cout << tot << endl;
}
 
}
/*
Sebastian Roman 100% Solution
*/