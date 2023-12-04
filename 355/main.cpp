#include <iostream>
using namespace std;
int main(){
    int n,x,mi=1e9;
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>x;
        if(x<mi) mi=x;
    }
    cout<<mi;
    return 0;
}