#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
long int tcase, move, mult;
long int ans;
cin >>tcase;
for(int i=0; i<tcase;++i){
 
cin >> move;
mult=move+1;
ans= abs(move*mult);
cout << ans << endl;
 
}
}
/*
Sebastian Roman 100% Solution
*/