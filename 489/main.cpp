#include <iostream>
using namespace std;
int a[1005];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;++i) cin>>a[i];
    for(int i=1;i<=n/2;++i){
        cout<<a[i]<<' '<<a[n-i+1]<<' ';
    }
    if(n&1) cout<<a[n/2+1];
    return 0;
}