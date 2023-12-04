#include <iostream>
using namespace std;
int a[1005];
int main(){
    int n,ct=0,i;
    cin>>n;
    for(i=1;i<=n;++i) cin>>a[i];
    for(i=1;i<=n;++i){
        if(a[i]&1) ct++;
        else ct--;
    }
    cout<<abs(ct);
    return 0;
}