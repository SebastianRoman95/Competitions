#include<bits/stdc++.h>
#include<algorithm> 
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
int a, total;
 
cin >> a;
long int b[a];
for (int i=0; i<a; i++){
    cin >> b[i];
}
for (int x=0; x<a; x++){
    if (b[x-1>0] == b[x]){
        total = b[x];
    } 
}
 
cout << total;
}
/*
Sebastian Roman 14% Solution
*/