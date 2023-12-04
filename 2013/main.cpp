#include <fstream>
using namespace std;
ifstream fin("numere18.in");
ofstream fout("numere18.out");
int main(){
    int c,n,s=0,p=1,pp=0,ct=0,ct2=0;
    fin>>c>>n;
    if(c==1){
        for(int i=1;i<=n;++i,++pp){
            p+=pp;
        }
        for(int i=1;i<=n;++i,++p){
            s+=p;
        }
        fout<<s;
    }
    else{
        for(;p<=n;++ct,++pp){
            p+=pp;
        }
        p=p-pp+1;
        --ct;
        while(p<=n){
            ++p;
            ++ct2;
        }
        fout<<ct<<' '<<ct2;
    }
    return 0;
}