#include <iostream>
using namespace std;
int main(){
    int n,x,mi=1e9,ma=-1e9;
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>x;
        if(x<mi) mi=x;
        if(x>ma) ma=x;
    }
    cout<<mi+ma;
    return 0;
}