#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int tcase=0;
cin >> tcase;
 
for(int i=0; i<tcase; ++i){
    int x1=0, y1=0, x2=0, y2=0, ansX=0, ansY=0;
    cin >> x1 >> y1 >> x2 >> y2;
    //if king 1 is the same as 2 : 2 wins
    //else if king 1 can get to king 2 in 1 space : 1 wins
    // else draw
 
    if(x1==x2&&y1==y2){
        cout << "SECOND" << endl;
    }
    else{
        if(x1<x2){
            ansX=x2-x1;
        }
        else{
            ansX=x1-x2;
        }
        
        if(y1<y2){
            ansY=y2-y1;
        }
        else{
            ansY=y1-y2;
        }
 
        if(ansX<=1&&ansY<=1){
            cout << "FIRST" << endl;
        }
        else{
        cout << "DRAW" << endl;
        }
    }  
}
}
/*
Sebastian Roman 100% Solution
*/