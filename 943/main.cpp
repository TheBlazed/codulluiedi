#include <iostream>
using namespace std;
int main(){
    long long n,s=0,x;
    cin>>n;
    if(n==0){
        cout<<1;
        return 0;
    }
    x=n/10;
    n%=10;
    for(;n;--n){
        s+=n*n*n*n;
    }
    cout<<(s+x*3)%10;
    return 0;
}
