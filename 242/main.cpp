#include <bits/stdc++.h>
#define N 100000000
using namespace std;
ifstream fin("interclasm.in");
ofstream fout("interclasm.out");
bitset<N> a;
int main(){
    int x,n,m,k,i;
    fin>>x>>n;
    for(i=1;i<=n;++i){
        fin>>k;
        if(k%x==0) a[k]=1;
    }
    fin>>m;
    for(i=1;i<=m;++i){
        fin>>k;
        if(k%x==0){
            if(a[k]==1) a[k]=0;
            else a[k]=1;
        }
    }
    for(i=x;i<=100000000;i+=x) if(a[i]==1) fout<<i<<' ';
}
