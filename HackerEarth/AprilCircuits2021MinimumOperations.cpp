#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int size,temp, high=0, total=1, tot;
cin>>size;
vector<int>vec;
//set<int>vs;
for(int i=0; i<size;++i){
    cin >> temp;
    vec.push_back(temp);
}
high=vec[0];
for(int i=1; i<size;++i){
    if(high!=vec[i]){
        ++total;
        high=vec[i];
    }
}
 
cout << total << endl;
 
}
/*
Sebastian Roman 100% Solution
*/