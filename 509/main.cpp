#include <bits/stdc++.h>
#define N 1005
using namespace std;
int a[N];
int main(){
    int n,m,i;
    bool ord=0;
    cin>>n;
    m=n;
    for(i=1;i<=n;++i) cin>>a[i];
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
    for(i=1;i<=n;++i) cout<<a[i]<<' ';
    return 0;
}
