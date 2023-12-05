#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long n,nn,ct=0,s=0;
    cin>>n;
    nn=n;
    while(n){
        n/=10;
        ct++;
    }
    for(int i=1;i<=ct;i++){
        s+=nn;
        nn/=10;
    }
    cout<<s;
    return 0;
}