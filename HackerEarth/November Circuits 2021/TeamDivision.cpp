#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int tcase;
cin>>tcase;
for(int i=0; i<tcase;++i){
    int size, num, num1, total, vsize;
    cin >> size;
    vector<int>vec;
    //inputs
    for(int j=0;j<size;++j){
        cin >> num;
        vec.push_back(num);
    }
    sort(vec.begin(),vec.end());
    //find middle numbers
    num=(size/2)-1;
    num1=num+1;
    if(vec[num1]<0&&vec[num]<0){
        total=abs(vec[num1])-abs(vec[num]);
        total=abs(total)+1;
    }
    else if(vec[num1]<0||vec[num]<0){
        total=((abs(vec[num])+abs(vec[num1]))+1);
    }
    else if(vec[num]==vec[num1]){
        total=1;
    }
    else{
        total=vec[num1]-vec[num];
        total=abs(total)+1;
    }
    cout << total<<endl;
}
}
/*
Sebastian Roman 100% Solution
*/