#include <iostream>
#include<string>
using namespace std;

int main() {
	   int tcase=0, valx, valy;
	   string tempxy;
	   cin >> tcase;
	   
	   for (int i=1; i<=tcase; i++)
	   {
	       cin >> tempxy;
	       valx=0;
	       valy=0;
	       int b=1;
	       while (b<tempxy.size()) 
	       {
	           if(tempxy[b-1]!=tempxy[b])
	           {
	               valx=valx+1;
	               b++;
	           }
	           else (tempxy[b-1]==tempxy[b]);
	               valx=valx+0;
	    
	        b++;
	       }
	       cout << valx << endl;
	   }
}

//Sebastian Roman 100% Solution