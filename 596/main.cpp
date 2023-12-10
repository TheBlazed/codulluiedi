#include <bits/stdc++.h>
#define N 25003
using namespace std;
ifstream fin("numere2.in");
ofstream fout("numere2.out");
int v[N];
int main(){
    int n,i,nr,k=1,ct=0;
    fin>>n>>v[1];
    for(i=2;i<=n;++i){
        fin>>nr;
        if(nr==v[k]){
            ++ct;
            --k;
        }
        else{
            ++k;
            v[k]=nr;
        }
    }
    fout<<ct<<endl;
    for(i=1;i<=k;++i) fout<<v[i]<<' ';
    return 0;
}