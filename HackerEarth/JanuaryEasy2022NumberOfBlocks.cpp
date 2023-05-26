#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int tcase;
cin>>tcase;
int num1, total=0, num2; ;
cin >> num1;
for(int i=1; i<tcase;++i){   
    cin >> num2;
    total += __gcd (num1, num2);
    num1=num2;
}
    cout << total;
}
/*
Sebastian Roman 24% Solution
*/