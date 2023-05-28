#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int tcase;
cin>>tcase;
for(int i=0; i<tcase;++i){
    int size, k, num;
    double total=0;
    cin >> size >> k;
    for(int j=0; j<size;++j){
        cin >> num;
        total+=num;
    }
    total=total/size;
    cout << ceil(total) <<endl;
}
 
}
/*
Sebastian Roman 9.1% Solution
*/