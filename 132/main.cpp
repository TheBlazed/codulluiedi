#include <bits/stdc++.h>
#define N 25
using namespace std;
ifstream fin("elempp.in");
ofstream fout("elempp.out");
int a[N],v[N];
int main(){
    int n,c,i,j=1,x;
    fin>>n;
    for(i=1;i<=n;++i){
        fin>>a[i];
        x=a[i];
        c=log10(x)+1;
        while(c>2){
            x/=10;
            c--;
        }
        if(sqrt(x)==int(sqrt(x))) v[j++]=a[i];
    }
    for(i=1;i<=j-1;++i) fout<<v[i]<<' ';
    return 0;
}
