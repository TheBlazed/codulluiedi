#include <bits/stdc++.h>
using namespace std;
#define N 105
ifstream fin("nrapprime.in");
ofstream fout("nrapprime.out");
bool prim(int n){
    if(n<2) return 0;
    if(n==2 || n==3) return 1;
    if(n%2==0||n%3==0) return 0;
    for(int i=5;i*i<=n;i+=6)
        if(n%i==0||n%(i+2)==0) return 0;
    return 1;
}
int a[N];
int main(){
    int n,i,ct=0;
    fin>>n;
    for(i=1;i<=n;++i){
        fin>>a[i];
        if(prim(a[i])) ++ct;
    }
    fout<<ct;
    return 0;
}