#include<bits/stdc++.h>
#include<algorithm> 
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
int fri, par; 
vector<pair<int, int>> fp;
 
cin >> fri;
 
for(int i=0; i<fri; i++){
    cin >> par;
    for(int f=0; f<par; f++){
       int a=0, b=0;
        cin >> a >> b;
        pair<int, int> pr = make_pair(a,b);
        fp.push_back(pr);
    }
}
 
sort(fp.begin(), fp.end());
int z=1;
for(int c=0; c<fp.size(); c++){
    if(c==0){ 
        if(z < fp[c].first){
           z=1;
            break;
        }
    }
    else {
        z = fp[c].second+1;
   
        if( z <=fp[c+1].first){
         if( z <= fp[c+1].second){
             break;
         }
        }
    }
}
 
cout<< z;
}
/*
Sebastian Roman 56% Solution
*/