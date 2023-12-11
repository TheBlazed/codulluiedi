#include <bits/stdc++.h>
using namespace std;
#define N 1005
int a[N];
int main(){
    int n,i;
    bool ord;
    cin>>n;
    for(i=1;i<=n;++i) cin>>a[i];
    while(!ord){
        ord=1;
        for(i=1;i<n;++i){
            if(a[i]<a[i+1]){
                ord=0;
                swap(a[i],a[i+1]);
            }
        }
        --n;
    }
    for(i=1;a[i];++i) cout<<a[i]<<' ';
    return 0;
}