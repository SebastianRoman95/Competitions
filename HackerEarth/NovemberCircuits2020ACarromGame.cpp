#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n=0, r=0, a=0, b=0, c=0, d=0;
cin >> n;
 
vector<int>bl(n), w(n);
for(int i=0; i<n;i++){
    cin >> bl[i];
}
for(int i=0; i<n;i++){
    cin >> w[i];
}
 
cin>> r >> a >> b >> c >>d;
int countb=0, countw=0;
 
while(true){
//A
if (countb>=n){
    if(a>=r){
        cout << "A-C";
        exit(0);
    }
    else{
        a++;
    }
}
else if(a>=bl[countb]){
    countb++;
}
else{
    a++;
}
 
//B
if (countw>=n){
    if(b>=r){
        cout << "B-D";
        exit(0);
    }
    else{
        b++;
    }
}
else if(b>=w[countw]){
    countw++;
}
else{
    b++;
}
 
//C
if (countb>=n){
    if(c>=r){
        cout << "A-C";
        exit(0);
    }
    else{
        c++;
    }
}
else if(c>=bl[countb]){
    countb++;
}
else{
    c++;
}
 
//D
if (countw>=n){
    if(d>=r){
        cout << "B-D";
        exit(0);
    }
    else{
        d++;
    }
}
else if(d>=w[countw]){
    countw++;
}
else{
    d++;
}
 
}
}
/*
Sebastian Roman 95% Solution
*/