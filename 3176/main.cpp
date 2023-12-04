#include <fstream>
using namespace std;
ifstream fin("fibo0.in");
ofstream fout("fibo0.out");
int main(){
    int a,b,ct=0;
    while(fin>>a>>b){
        if(b%a==0) ++ct;
    }
    fout<<ct;
    return 0;
}