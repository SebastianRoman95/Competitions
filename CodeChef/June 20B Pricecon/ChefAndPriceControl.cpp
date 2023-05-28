#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int x=0, a=0, b=0, c=0, totalA, totalB, total;
	//user test cases amount
	cin >> x;
	//test cases
	for(int i =1; i<=x; i++) {
	    cin >> a >> b;
	    //reset
	    totalA=0;
	    totalB=0;
	    total=0;
	    //A and B totals
	    for (int n=1; n<=a;n++)
	    {
	        cin >> c;
	         //A total
	        totalA= totalA + c;
	       //B total
	       if(c>=b)
	        totalB = totalB+b;
	       else if(c<b)
	        totalB = totalB+c;
	    }
	    //answer and output
	    total= abs(totalA-totalB);
	    cout << total << endl;
	}
}

//Sebastian Roman 100% Solution