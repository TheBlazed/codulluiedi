#include <iostream>
using namespace std;
int a[1005];
int main(){
    int n,m;
    cin>>n;
    for(int i=1;i<=n;++i) cin>>a[i];
    if(n&1) m=n;
    else m=n-1;
    for(int i=2;i<=n;i+=2){
        cout<<a[i]<<' ';
    }
    cout<<endl;
    for(int i=m;i>=1;i-=2){
        cout<<a[i]<<' ';
    }
    return 0;
}