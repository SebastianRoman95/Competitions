#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
int i=0, b=0, chip=0, num=0;
srand(time(0));
cin >>i;
 
for(int n =0; n<i;n++){
    cin >> b;
    for(int v =0; v<b;v++){
        cin >>chip;
        num= (rand()%2);
        if(chip<=6){
            cout << "1 ";
        }
        else{
            if(num==0){
                cout << "0 ";
            }
            else{
            cout << "1 ";
            }
        }
    }
}
}
/*
Sebastian Roman 8% Solution
*/