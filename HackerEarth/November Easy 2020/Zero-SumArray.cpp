#include<bits/stdc++.h>
#include<algorithm> 
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
int tcase, casenum, tempval;
int t, tot;
cin >> tcase;
 
    for(int i =0; i<tcase; i++){
        cin >> casenum;
        int arr[casenum], arr2[casenum-1];
        for(int b =0; b<casenum; b++){
            cin >> tempval;
            arr[b]=tempval;
 
        }
 
        sort(arr, arr+casenum);
        tot=0;
        t=0;
       //have it find the total
        for(int d =0; d<casenum-1; d++){
            tot=tot+arr[d];
            t=arr[casenum-1]+arr[d];
            arr2[d]=t;
        }       
 
            int w=0, g=0;
            for(int f =0; f<casenum-1; f++){
                g=f;
                w= tot-arr[f];
                if(arr2[f]==w){
                    break;
                }
            }
        if(tot==arr[casenum-1]){
            cout << "1";
        }
        else if(arr2[g]==w){
            cout << '2';
        }
        else{
            cout << "-1";
        }
        cout <<endl;
    }
}
/*
Sebastian Roman 60% Solution
*/