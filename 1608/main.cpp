#include <bits/stdc++.h>
#define N 1005
using namespace std;
ifstream fin("sortare_divizori.in");
ofstream fout("sortare_divizori.out");
int nrdiv(int n){
    int nr=1;
    int d=2,p;
    while(n!=1){
        p=0;
        while(n%d==0) p++,n/=d;
        if(p) nr*=p+1;
        if(d*d<n) d++;
        else d=n;
    }
    return nr;
}
int a[N],b[N];
int main()
{
    int n,i,j;
    bool ord;
    fin>>n;
    for(i=1;i<=n;++i){
        fin>>a[i];
        b[i]=nrdiv(a[i]);
    }
    j=n;
    while(!ord){
        ord=1;
        for(i=1;i<j;++i){
            if(b[i]<b[i+1] || (b[i]==b[i+1] && a[i]>a[i+1])){
                ord=0;
                swap(a[i],a[i+1]);
                swap(b[i],b[i+1]);
            }
        }
        --j;
    }
    for(i=1;i<=n;++i){
        fout<<a[i]<<' ';
    }
    return 0;
}