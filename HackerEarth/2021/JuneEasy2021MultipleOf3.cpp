#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int tcase, count=1, leav=0;
long long int num, num2, tot;
cin>>tcase;
for(int i=0; i<tcase;++i){
    cin >> num;
    if(num%3==0){
        cout << num <<endl;
    }
    else if(num%10==0){
        num=num*10+2;
        cout << num <<endl;
    }
    else if(num%2==0){
        num2=num;
        while(leav!=1){
            if(num2<10){
                leav=1;
            }
            else{
                ++count;
                num2=num2/10;
            }
        }
        tot=pow(10, count);
        num=num+tot;
        cout << num <<endl;
    }
    else{
        cout << num*3 <<endl;
    }
    
}
 
}
/*
Sebastian Roman 33% Solution
*/