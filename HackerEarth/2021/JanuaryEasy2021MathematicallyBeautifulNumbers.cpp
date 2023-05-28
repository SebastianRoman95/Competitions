#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int tcase=0, y=0, total=0;
long long int x=0;
cin >> tcase;
for(int i=0; i<tcase;++i){
    cin >> x >> y;
    if(x % y == 0 || x % y == 1)
    {
        cout << "YES" <<endl;
    }
    else{
        cout << "NO" << endl;
    }
}
 
}
/*
Sebastian Roman 10% Solution
*/