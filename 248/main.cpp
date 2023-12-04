#include <bits/stdc++.h>
#define N 10005
using namespace std;
ifstream fin("pozitie.in");
ofstream fout("pozitie.out");
int a[N];
int main(){
    int n,ct,i;
    fin>>n>>a[1];
    ct=n;
    for(i=2;i<=n;++i){
        fin>>a[i];
        if(a[i]>a[1]) ct--;
    }
    fout<<ct;
    return 0;
}