#include<bits/stdc++.h>
#include<algorithm> 
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n, t=0, swapn=0, swapn2=0;
cin >> n;
vector<int> vec, vec2;
 
for(int i=1; i<=n;i++){
     vec.push_back(i);
     vec2.push_back(i);
}
 
sort(vec.begin(), vec.end(), greater<int>());
int totmax2=0, totmax=0, tot=0;
t=n%2;
 
if(t==0){
     cout << n <<endl;
     for(int c=0; c<n-1;c+=2){
          swap(vec2[c], vec2[c+1]);
          cout << vec2[c] << ' ' << vec2[c+1] << ' ';
     }
     cout << endl;
     totmax= n/2;
     cout << totmax*n <<endl;
     for(int i=0; i<n;i++){
         cout << vec[i] << ' ';
     }
}
else{
     cout << n+1 <<endl;
     swapn= n/2-1;
     swap(vec[swapn],vec[swapn+1]);
     for(int y=0; y<n-1;y+=2){
          swap(vec2[y], vec2[y+1]);
     }
     swapn2= n-3;
     swap(vec2[swapn2],vec2[n-1]);
 
     for(int p=0; p<n;p++){
          cout << vec2[p] << ' ';
     }
     cout <<endl;
     for(int m=1; m<=n;m++){
          tot+= abs(vec[m-1]-m);
     }
     cout <<tot <<endl;
     for(int u=0; u<n;u++){
          cout << vec[u] << ' ';
     }
}
 
}
/*
Sebastian Roman 96.2% Solution
*/