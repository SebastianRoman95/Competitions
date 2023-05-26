#include<bits/stdc++.h>
#include<algorithm> 
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int apple, n, val, a, b, c, count;
cin >> apple;
cin >> n;

for(int i=0; i<n; i++){
    cin >> a >> b >> c;
    if (c==1){
        count++;
    }
}

if(count % 2 == 0){
    cout << "NO";
}
else {
    cout << "YES";
}

}
/*
Sebastian Roman 90% Solution
*/