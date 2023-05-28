#include<bits/stdc++.h>
#include<algorithm> 
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t, counter=0, counter2=0, counter3=0, total=0;
cin >> t;
int b=t, c=0;
for(int i = 0; i < t; i++){
    int n;
    cin >> n;
    counter++;
    //counter counts n and temp
    if(counter<t){
        for(int i = 0; i < n; i++){
           if(counter<t){
            counter++;
            int temp;
            cin >> temp;
           }
           else{
               //count whats is left over from n
               counter2++;
           }
        }
    }
    else{
        //counts what is left from t
        counter3++;
    }
    total=c-counter3;
    if(total==t){
        break;
    }
    c++;
}
cout << counter2+counter3;
}
/*
Sebastian Roman 95% Solution
*/