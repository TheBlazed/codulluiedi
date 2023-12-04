#include <iostream>
using namespace std;
int a[1005];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;++i) cin>>a[i];
    for(int i=1;i<=n;++i){
        if(a[i]%a[n]==0) cout<<a[i]<<' ';
    }
    return 0;
}