#include <iostream>
using namespace std;
int main(){
    int n,x,ma=-1e9;
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>x;
        if(x>ma) ma=x;
    }
    cout<<ma;
    return 0;
}