#include <iostream>
#include <cctype>
#include<bits/stdc++.h>
using namespace std;

int main() {
    string sen="";
    vector<string> str;
    int i=0;

    while(cin >> sen){
        char ch;
        for(int j=0;j<sen.length();++j){
            if(sen[j]=='a'||sen[j]=='A'){
                if(sen[j]=='A'){
                    sen[j]='O';
                }
                else{
                    sen[j]='o';
                }
            }
            else if(sen[j]=='b'||sen[j]=='B'){
                if(sen[j]=='B'){
                    sen[j]='P';
                }
                else{
                    sen[j]='p';
                }
            }
            else if(sen[j]=='c'||sen[j]=='C'){
                if(sen[j]=='C'){
                    sen[j]='Q';
                }
                else{
                    sen[j]='q';
                }
            }
            else if(sen[j]=='d'||sen[j]=='D'){
                if(sen[j]=='D'){
                    sen[j]='R';
                }
                else{
                    sen[j]='r';
                }
            }
            else if(sen[j]=='e'||sen[j]=='E'){
                if(sen[j]=='E'){
                    sen[j]='S';
                }
                else{
                    sen[j]='s';
                }
            }
            else if(sen[j]=='f'||sen[j]=='F'){
                if(sen[j]=='F'){
                    sen[j]='T';
                }
                else{
                    sen[j]='t';
                }
            }
            else if(sen[j]=='g'||sen[j]=='G'){
                if(sen[j]=='G'){
                    sen[j]='U';
                }
                else{
                    sen[j]='u';
                }
            }
            else if(sen[j]=='h'||sen[j]=='H'){
                if(sen[j]=='H'){
                    sen[j]='V';
                }
                else{
                    sen[j]='v';
                }
            }
            else if(sen[j]=='i'||sen[j]=='I'){
                if(sen[j]=='I'){
                    sen[j]='W';
                }
                else{
                    sen[j]='w';
                }
            }
            else if(sen[j]=='j'||sen[j]=='J'){
                if(sen[j]=='J'){
                    sen[j]='X';
                }
                else{
                    sen[j]='x';
                }
            }
            else if(sen[j]=='k'||sen[j]=='K'){
                if(sen[j]=='K'){
                    sen[j]='Y';
                }
                else{
                    sen[j]='y';
                }
            }
            else if(sen[j]=='l'||sen[j]=='L'){
                if(sen[j]=='L'){
                    sen[j]='Z';
                }
                else{
                    sen[j]='z';
                }
            }
            else if(sen[j]=='m'||sen[j]=='M'){
                if(sen[j]=='M'){
                    sen[j]='A';
                }
                else{
                    sen[j]='a';
                }
            }
            else if(sen[j]=='n'||sen[j]=='N'){
                if(sen[j]=='N'){
                    sen[j]='B';
                }
                else{
                    sen[j]='b';
                }
            }
            else if(sen[j]=='o'||sen[j]=='O'){
                if(sen[j]=='O'){
                    sen[j]='C';
                }
                else{
                    sen[j]='c';
                }
            }
            else if(sen[j]=='p'||sen[j]=='P'){
                if(sen[j]=='P'){
                    sen[j]='D';
                }
                else{
                    sen[j]='d';
                }
            }
            else if(sen[j]=='q'||sen[j]=='Q'){
                if(sen[j]=='Q'){
                    sen[j]='E';
                }
                else{
                    sen[j]='e';
                }
            }
            else if(sen[j]=='r'||sen[j]=='R'){
                if(sen[j]=='R'){
                    sen[j]='F';
                }
                else{
                    sen[j]='f';
                }
            }
            else if(sen[j]=='s'||sen[j]=='S'){
                if(sen[j]=='S'){
                    sen[j]='G';
                }
                else{
                    sen[j]='g';
                }
            }
            else if(sen[j]=='t'||sen[j]=='T'){
                if(sen[j]=='T'){
                    sen[j]='H';
                }
                else{
                    sen[j]='h';
                }
                
            }
            else if(sen[j]=='u'||sen[j]=='U'){
                if(sen[j]=='U'){
                    sen[j]='I';
                }
                else{
                    sen[j]='i';
                }
                
            }
            else if(sen[j]=='v'||sen[j]=='V'){
                if(sen[j]=='V'){
                    sen[j]='J';
                }
                else{
                    sen[j]='j';
                }
            }
            else if(sen[j]=='w'||sen[j]=='W'){
                if(sen[j]=='W'){
                    sen[j]='K';
                }
                else{
                    sen[j]='k';
                }
            }
            else if(sen[j]=='x'||sen[j]=='X'){
                if(sen[j]=='X'){
                    sen[j]='L';
                }
                else{
                    sen[j]='l';
                }
            }
            else if(sen[j]=='y'||sen[j]=='Y'){
                if(sen[j]=='Y'){
                    sen[j]='M';
                }
                else{
                    sen[j]='m';
                }
            }
            else if(sen[j]=='z'||sen[j]=='Z'){
                if(sen[j]=='Z'){
                    sen[j]='N';
                }
                else{
                    sen[j]='n';
                }
            }
            
        }
        str.push_back(sen);
        cout << str[i] << ' ';
        i++;
    }
}

/*
IEEEXtreme 16.0
Points: 48.36
Sebastian Roman
*/