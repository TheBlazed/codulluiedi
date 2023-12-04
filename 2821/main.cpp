#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,p=1,i=2;
    bool ok=0;
    cin>>n;
    while(n!=1){
        ok=0;
        while(n%i==0){
            ok=1;
            n/=i;
        }
        if(ok) p*=i;
        ++i;
        if(i*i>n) i=n;
    }
    cout<<p;
    return 0;
}