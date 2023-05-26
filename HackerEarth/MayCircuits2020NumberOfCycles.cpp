#include<bits/stdc++.h>
#include<algorithm> 
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long int q=0,n=0, s=0, d=0, c=0;
cin >> q;

    for(int b= 0; b < q; b++){
        cin>> n;
        d= n-1;
        c= n-d;
        s= (n*d) + c;
        cout << s << endl;
    }
}
/*
Sebastian Roman 100% Solution
*/