#include <bits/stdc++.h>
#define N 1005
using namespace std;
ifstream fin("maxsim.in");
ofstream fout("maxsim.out");
int a[N];
int main(){
    int n,i,s=0,pi,pj;
    fin>>n;
    for(i=1;i<=n;++i) fin>>a[i];
    for(i=1;i<=n/2;++i){
        if(a[i]+a[n-i+1]>s){
            s=a[i]+a[n-i+1];
            pi=i;
            pj=n-i+1;
        }
    }
    fout<<s<<' '<<pi<<' '<<pj;
    return 0;
}