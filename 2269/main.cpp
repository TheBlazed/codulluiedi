#include <fstream>
using namespace std;
ifstream fin("maximpar.in");
ofstream fout("maximpar.out");
int main(){
    int n,x,ct=0,ma=-1e9;
    fin>>n;
    for(int i=1;i<=n;++i){
        fin>>x;
        if(x>ma && x%2==0){
            ma=x;
            ct=1;
        }
        else if(x==ma) ++ct;
    }
    if(ct) fout<<ma<<' '<<ct;
    else fout<<-1;
    return 0;
}