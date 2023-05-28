#include<bits/stdc++.h>
#include<algorithm> 
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n=0, q=0, tem=0, digsum=0, ans=0;
vector<int> vecN, vecOrg;
string dig;
cin >> n >> q;

//n is for # in the quary vecN
for (int i=0; i<n; i++){
    cin >> tem;
    vecOrg.push_back(tem);
    dig = to_string(tem);
    for(int v=0; v<dig.size();v++){
        digsum+=dig[v]-'0';
    }
    vecN.push_back(digsum);
    digsum=0;
}

//digsum is adding them wrong 

//compare sum dig
for (int c=0; c<q; c++){
    cin >> tem;
//current # to n#
        for(int t=tem+1; t<=vecN.size(); t++){
        
            if(vecOrg[t-1] > vecOrg[tem-1] && vecN[t-1] < vecN[tem-1]){
                ans= t;
                break;
            }
        }
    if(ans>0){
        cout << ans<<endl;
    }
    else {
        cout << "-1" <<endl;
    }
    ans=0; 
}

}
/*
Sebastian Roman 100% Solution
*/