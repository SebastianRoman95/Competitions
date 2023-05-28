#include<bits/stdc++.h>
#include<algorithm> 
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int x=0, n=0, res;

cin >>x;
cin >> n;

res= pow(x, n);
while (res<10){
if (res>10)
res= res%10;
}

cout << res;

}
/*
Sebastian Roman 2% Solution
*/