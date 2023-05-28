#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int test, cuts, testDup;
    cin >> test;
    for (int casesTested = 0; casesTested < test; casesTested++) {
        int count = 1;
        cin >> cuts;
        if (cuts == 0){
            cout << "1" << endl;
        }
        else if (cuts == 1){
            cout << "2" << endl;
        }
        else {
            int degrees[cuts] = {0};
            for (int i = 0; i < cuts; i++) {
                cin >> degrees[i];
                while (degrees[i] < 0) {
                    degrees[i] += 180;
                }
                
                while (degrees[i] >= 180) {
                    degrees[i] = degrees[i] - 180;
                }
            }
        
            for (int i = 1; i < cuts; i++) {
                int j = 0;
                bool theSame = false;
                    while ( j < i ) {
                    testDup = degrees[j];
                        if (degrees[i] == testDup) {
                            theSame = true;
                        }
                        j++;
                    }
                    if (theSame == false)
                        count++;
            }
            int slices = count * 2;
            cout << slices << endl;
        }
    }
}

/*
IEEEXtreme 16.0
Points: 54.93
Drake Bainter, Sebastian Roman, and Zach Schmitz 
*/