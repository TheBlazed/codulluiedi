#include <bits/stdc++.h>
using namespace std;
#define N 1005
int a[N],b[N];
int main(){
    int n,i,j=0,m;
    bool ord;
    cin>>n;
    for(i=1;i<=n;++i) cin>>a[i];
    for(i=1;i<n;++i){
        int x=a[i];
        int y=a[n];
        while(x!=0){
            int r=y%x;
            y=x;
            x=r;
        }
        if(y==1){
            b[++j]=a[i];
        }
    }
    m=j;
    while(!ord){
        ord=1;
        for(i=1;i<=j;++i){
            if(b[i]<b[i+1]){
                ord=0;
                swap(b[i],b[i+1]);
            }
        }
        --j;
    }
    for(i=1;i<=m;++i) cout<<b[i]<<' ';
    return 0;
}