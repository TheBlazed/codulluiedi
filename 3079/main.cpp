#include <iostream>
using namespace std;
int main(){
    int n=0,a,b,ca,cb,c,p=1;
    cin>>a>>b;
    while(a){
        ca=a%10;
        cb=b%10;
        c=(ca+cb)/2;
        n+=c*p;
        p*=10;
        a/=10;
        b/=10;
    }
    cout<<n;
    return 0;
}