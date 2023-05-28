#include<bits/stdc++.h>
#include<algorithm> 
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long int tcase=0, slices=0, total=0;
cin >> tcase;

    for(int i=0; i<tcase; i++){
        cin >> slices;
        total=(slices*(slices+1))/2+1;
        cout << total <<endl;
    }
}
/*
Sebastian Roman 100% Solution
*/