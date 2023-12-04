#include <bits/stdc++.h>
using namespace std;
#define N 10005
ifstream fin("numere8.in");
ofstream fout("numere8.out");
bool cr[N];
int main(){
    int x,i;
    while(fin>>x){
        if(x<1e4) cr[x]=1;
    }
    for(i=9999;i>=1;--i){
        if(cr[i]==0) fout<<i<<' ';
    }
    return 0;
}