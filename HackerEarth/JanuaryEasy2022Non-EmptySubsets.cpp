#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int tcase;
cin>>tcase;
for(int i=0; i<tcase;++i){
    int size;
    long int num;
    //long double num;
    cin >> size >> num;
    //num1=num;
    for(int p=1; p<size;++p){
        long int num2;
        cin >> num2;
        if(num>num2){
            num=num2;
            //num1=num2;
        }
    }
    /*
    if(num==num1){
        cout << num << endl;
    }
    else{
        cout << 0 <<endl;
    } */
    cout << num << endl;
}
 
}
/*
Sebastian Roman 100% Solution
*/