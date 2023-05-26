#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//vals
int tcase, size;
cin >> tcase;
 
//test case
for(int i=0; i<tcase; ++i){
cin >> size;
//vals
int temp, hval, lval;
vector <int> vec;
    for(int p=0; p<size;++p){
        cin >> temp;
        vec.push_back(temp);
    } 
    vector <int> vec2= vec;
    sort(vec2.begin(), vec2.end());
    for(int p=0; p<vec2.size();++p){
        lval =  *find(vec.begin(), vec.end(), vec2[p]);
        for(int i=0; i<size;++i){
            if(vec[i]<lval){
                hval=i;
                break;
            }
        }
        if(hval==i){
            break;
        }
    } 
   // cout << hval << lval <<endl;
    swap(vec[hval],vec[lval]);
    for(int k=0;k<size;++k){
        cout << vec[k] << ' ';
    }
}
 
}
/*
Sebastian Roman 1% Solution
*/