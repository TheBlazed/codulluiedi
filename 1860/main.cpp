#include <bits/stdc++.h>
#define N 15
using namespace std;
ifstream fin("blackfriday.in");
ofstream fout("blackfriday.out");
int a[N],b[N];
int main(){
    int n,i,x;
    double mx=0,c;
    fin>>n;
    for(i=1;i<=n;++i) fin>>a[i];
    for(i=1;i<=n;++i) fin>>b[i];
    for(i=1;i<=n;++i){
        c=(double)a[i]/b[i];
        if(c>mx){
            mx=c;
            x=i;
        }
    }
    fout<<x;
    return 0;
}