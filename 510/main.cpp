#include <bits/stdc++.h>
#define N 1005
using namespace std;
int a[N];
bool prim(int n){
    if(n<2) return 0;
    if(n==2 || n==3) return 1;
    if(n%2==0 || n%3==0) return 0;
    for(int i=5;i*i<=n;i+=6){
        if(n%i==0 || n%(i+2)==0) return 0;
    }
    return 1;
}
int main(){
    int n,m,x,k=0,i;
    bool ord=0;
    cin>>n;
    for(i=1;i<=n;++i){
        cin>>x;
        if(prim(x)) a[++k]=x;
    }
    m=k;
    while(!ord){
        ord=1;
        for(i=1;i<m;++i){
            if(a[i]>a[i+1]){
                swap(a[i],a[i+1]);
                ord=0;
            }
        }
        --m;
    }
    for(i=1;i<=k;++i) cout<<a[i]<<' ';
    return 0;
}