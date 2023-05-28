#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int tcase=0;
cin >> tcase;
 
for(int i=0; i<tcase; ++i){
    int stringSize=0;
    string string1, string2;
    map <char, int> str1, str2;
    cin >> stringSize >> string1 >> string2;
    
    for(int b=0; b<stringSize; ++b){
        str1[string1[b]]++;
        str2[string2[b]]++;
    }
    int numcount =0;
    for(auto x:str1){
        if(str2.count(x.first) == 0){
           numcount += x.second;  
        }
        else if(str2[x.first] < x.second){
            numcount+= abs(str2[x.first]-x.second);
        }
}
//cout << numcount << endl;
cout << ((numcount <=1) ? "YES" : "NO") <<endl; 
}
}
/*
Sebastian Roman 100% Solution
*/