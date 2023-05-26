#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int tcase;
cin>>tcase;
for(int i=0; i<tcase;++i){
    int size, num, total=0;
    cin >> size >> num;
    for(int f=0; f<size;++f){
        int tot;
        cin >> tot;
        total+=tot;
    }
    int count=0;
    while(total!=0){
        if(total>0){
            total-=num;
            if(total<0){
                total=0;
            }
        }
        else if(total<0){
            total+=num;
            if(total>0){
                total=0;
            }
        }
        count++;
    }
    cout << count << endl;
}
 
}
/*
Sebastian Roman 100% Solution
*/