#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int tcase;
cin>>tcase;
for(int i=0; i<tcase;++i){
    int box1, box2, div, count, boxmod, minbox;
    cin >> box1 >> box2;
    count = box1+box1-2;
 
    if(box1>=box2){
        cout << box2 <<endl;
    }
    else{
        boxmod=box2/count;
        minbox=box2-(boxmod*count);
        if(minbox>box1){
            cout << box1*2-minbox << endl;
        }
        else if(minbox==0){
            cout << '2' <<endl;
        }
        else{
            //for(int p=1; p<minbox;++p){
                cout << minbox <<endl;
            //}
        }
    }
}
 
}
/*
Sebastian Roman 100% Solution
*/