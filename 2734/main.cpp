#include <bits/stdc++.h>
using namespace std;
int a[1005];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;++i) cin>>a[i];
    for(int i=1;i<=n;++i){
        for(int j=i+1;j<=n;++j){
            if(a[j]==a[i]){
                for(int k=j;k<=n;++k) a[k]=a[k+1];
                --n;
                --j;
            }
        }
    }
    for(int i=1;i<=n;++i) cout<<a[i]<<' ';
    return 0;
}