#include <iostream>
using namespace std;
int a[1005];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;++i) cin>>a[i];
    for(int i=1;i<=n;++i){
        if(!(a[i]&1)){
            for(int j=i;j<=n;++j) a[j]=a[j+1];
            --n;
            --i;
        }
    }
    for(int i=1;i<=n;++i) cout<<a[i]<<" ";
    return 0;
}